// Reviewed

#include <iostream>
using namespace std;

class Apple
{
public:
	Apple();
	~Apple();

	string get_color();
	static int get_count();
	static void change_color_to_red(Apple& apple);

private:
	string color;
	static int count;
};

Apple::Apple()
{
	++count;
	color = "Green";
}
Apple::~Apple()
{
	--count;
}
string Apple::get_color()
{
	return color;
}
int Apple::get_count()
{
	return count;
}
void Apple::change_color_to_red(Apple& apple)
{
	apple.color = "Red";
}
int Apple::count = 0;

int main()
{
	cout << Apple::get_count() << endl;
	Apple apple;
	cout << apple.get_color() << endl;
	Apple::change_color_to_red(apple);
	cout << apple.get_color() << endl;
	cout << Apple::get_count() << endl;
	Apple apple2;
	cout << Apple::get_count() << endl;
	apple2.~Apple();
	cout << Apple::get_count() << endl;
	apple.~Apple();
	cout << Apple::get_count() << endl;
}
