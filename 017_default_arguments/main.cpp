#include <iostream>
using namespace std;

void foo(int a, int b = 1)
{
	for (int i = 0; i < a; ++i)
	{
		cout << "a" << endl;
	}

	for (int i = 0; i < b; ++i)
	{
		cout << "b" << endl;
	}
}

int main()
{
	foo(2);
	cout << endl;
	foo(2, 2);
}