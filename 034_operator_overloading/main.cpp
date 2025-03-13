#include <iostream>
using namespace std;

class Human
{
public:
	Human(string name, int size);

	string name;

	Human& operator = (const Human& human);
	bool operator == (const Human& human);

	~Human();

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
Human& Human::operator = (const Human& human)
	{
		cout << this << ": Operator = caleed" << endl;
		delete[] parr;
		name = human.name;
		size = human.size;
		parr = new int[size];
		for (int i = 0; i < size; ++i)
		{
			parr[i] = human.parr[i];
		}
		return *this;
	}
bool Human::operator == (const Human& human)
	{
		bool result = true;
		if (!(name == human.name && size == human.size))
		{
			result = false;
			return result;
		}
		for (int i = 0; i < size; ++i)
		{
			if (parr[i] != human.parr[i])
			{
				result = false;
				return result;
			}
		}
		return result;
	}
Human::~Human()
	{
		cout << this << ": Destructor" << endl;
		delete[] parr;
		parr = nullptr;
	}

class Point
{
public:
	Point();
	Point(int x, int y);

	Point operator++(int value);
	Point& operator++();

private:
	int x;
	int y;
};

Point::Point()
	{
		x = 0;
		y = 0;
	}
Point::Point(int x, int y)
	{
		this->x = x;
		this->y = y;
	}
Point Point::operator++(int value)
	{
		Point temp(*this);
		++x;
		++y;
		return temp;
	}
Point& Point::operator++()
	{
		++x;
		++y;
		return *this;
	}

int main()
{
	Human human1("John", 10);
	Human human2("Steve", 10);
	bool result = human1 == human2;
	human2 = human1;
	result = human1 == human2;
	int a, b, c;
	c = 1;
	a = b = c;
	Human human3("Owl", 10);
	human3 = human2 = human1;
}
