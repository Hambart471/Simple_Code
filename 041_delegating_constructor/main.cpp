#include <iostream>
using namespace std;

class Human
{
public:
	Human(string name)
	{
		this->name = name;
		this->age = 0;
		this->weight = 0;
	}
	Human(string name, int age) :Human(name)
	{
		this->age = age;
	}
private:
	string name;
	int age;
	double weight;
};

int main()
{
}