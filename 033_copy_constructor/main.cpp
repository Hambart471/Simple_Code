#include <iostream>
using namespace std;

class Human
{
public:
	Human(string name, int size);
	Human(const Human& human);

	~Human();

	string name;

private:
	int size;
	int* parr;
};

Human::Human(string name, int size)
	{
		cout << this << ": Constructor" << endl;
		this->name = name;
		this->size = size;
		parr = new int[size];
		for (int i = 0; i < size; ++i)
		{
			parr[i] = i;
		}
	}
Human::Human(const Human& human)
	{
		cout << this << ": Copy constructor" << endl;
		name = human.name;
		size = human.size;
		parr = new int[size];
		for (int i = 0; i < size; ++i)
		{
			parr[i] = human.parr[i];
		}
	}
Human::~Human()
	{
		cout << this << ": Destructor" << endl;
		delete[] parr;
	}

void foo(Human human)
{
	cout << "Function foo called" << endl;
}

Human foo_2()
{
	cout << "Function foo_2 called" << endl;
	Human temp("Steve", 10);
	return temp;
}

int main()
{
	Human human1("Steve", 10);
	Human human2(human1);
	Human human3("Steve", 10);
	foo(human3);
	cout << foo_2().name << endl;
}