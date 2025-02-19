#include <iostream>
using namespace std;

int a;

void increment()
{
	a++;
}

void increment2(int a)
{
	a++;
}

int main()
{
	cout << a << endl;
	increment();
	cout << a << endl;
	increment2(a);
	cout << a << endl;
}