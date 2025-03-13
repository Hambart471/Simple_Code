#include <iostream>
using namespace std;

class Human
{
public:
	Human();
	Human(int age, string name);

	int age;

	void set_name(string name);
	string get_name();
	void print();

	~Human();

private:
	string name;
};

Human::Human()
	{
		cout << "\nConstructcor called" << endl;
		cout << "this = " << this << endl;
		name = "Steven";
		age = 41;
		cout << "Constructor constructed\n" << endl;
	}
Human::Human(int age, string name)
	{
		cout << "\nConstructcor called" << endl;
		cout << "this = " << this << endl;
		this->age = age;
		this->name = name;
		cout << "Constructor constructed\n" << endl;
	}
void Human::set_name(string name)
	{
		this->name = name;
	}
string Human::get_name()
	{
		return name;
	}
void Human::print()
	{
		cout << "Name: " << name << "\nAge: " << age << endl;
	}
Human::~Human()
	{
		cout << "\nDestructor called" << endl;
	}

int main()
{
	Human human;
	human.print();
	human.age = 29;
	human.set_name("Hambart");
	cout << "Name: " << human.get_name() << "\nAge: " << human.age << endl;
	human.print();
	Human human2(31,"Constantine");
	human2.print();
	Human human3(human2);
	//Human human3 = human2;
	human3.print();
	human3 = human;
	human3.print();
}