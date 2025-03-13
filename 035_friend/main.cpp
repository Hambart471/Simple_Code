#include <iostream>
using namespace std;

class Apple;

class Human
{
public:
	void TakeApple(Apple& apple);
private:
	friend void initialization(Apple& apple, Human& human);
	
	friend Apple;
};

class Apple
{
public:
	Apple(int weight, string color);

private:
	int weight;
	string color;

	friend void initialization(Apple& apple, Human& human);
	friend void Human::TakeApple(Apple& apple);
};


void Human::TakeApple(Apple& apple)
{
	cout << "Taken apple\n" << "Weight: " << apple.weight << endl << "Color: " << apple.color << endl << endl;
}

Apple::Apple(int weight, string color)
{
	this->weight = weight;
	this->color = color;
}

void initialization(Apple& apple, Human& human)
{
	cout << apple.weight << "\t" << apple.color << endl;
	apple.weight = 0;
	apple.color = '0';
	cout << apple.weight << "\t" << apple.color << endl << endl;
}

int main()
{
	Apple apple(100, "Red");
	Human human;
	human.TakeApple(apple);
	initialization(apple, human);
	human.TakeApple(apple);
}
