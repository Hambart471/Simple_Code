// Reviewed

#include <iostream>
using namespace std;

class Human
{
public:
	Human()
	{
		cout << "Human()" << endl;
	}
	Human(int value)
	{
		cout << "Human(int value)" << endl;
	}
};

class Student :public Human
{
};

class Teacher :public Human
{
public:
	Teacher() : Human(1)
	{
	}
};

class Dean :public Human
{
public:
	Dean(int value) : Human(value)
	{
	}
};

int main()
{
	Student student;
	Teacher teacher;
	Dean dean(2);
}