#include <iostream>
using namespace std;

class A
{
public:
	A()
	{
		cout << "A()" << endl;
	}
	~A()
	{
		cout << "~A()" << endl;
	}
};

class B :public A
{
public:
	B()
	{
		cout << "B()" << endl;
	}
	~B()
	{
		cout << "~B()" << endl;
	}
};

class A2
{
public:
	A2()
	{
		cout << "A2()" << endl;
	}
	virtual ~A2()
	{
		cout << "~A2()" << endl;
	}
};

class B2 :public A2
{
public:
	B2()
	{
		cout << "B2()" << endl;
	}
	~B2() override
	{
		cout << "~B2()" << endl;
	}
};

// Class C became abstract because we made pure virtual destructor
class C
{
public:
	virtual ~C() = 0;
};

C::~C() {};

class D :public C
{
public:
	~D() override
	{
		cout << "~D()" << endl;
	}
};

int main()
{
	B b;
	cout << endl;

	B* pb = new B;
	delete pb;
	cout << endl;

	A* pa = new B;
	delete pa;
	cout << endl;

	A2* pa2 = new B2;
	delete pa2;
	cout << endl;
}
