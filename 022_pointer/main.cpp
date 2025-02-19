#include <iostream>
using namespace std;

void foo(int* pc)
{
	++*pc;
}

void foo2(int* pd, int* pe)
{
	int temp = *pd;
	*pd = *pe;
	*pe = temp;
}

void main()
{
	int a = 5;
	double b = 5;
	int* pa = &a;
	int* pa2 = &a;
	double* pb = &b;
	cout << &a << endl;
	cout << &b << endl;
	cout << pa << endl;
	cout << pa2 << endl;
	cout << pb << endl;
	cout << *pa << endl;
	cout << *pb << endl;
	*pa = 25;
	cout << *pa << endl;
	cout << a << endl;

	const int SIZE = 5;
	int arr[SIZE]{ 4,55,79,1,4 };

	for (int i = 0; i < SIZE; ++i)
	{
		cout << arr[i] << endl;
	}

	int* parr = arr;

	for (int i = 0; i < SIZE; ++i)
	{
		cout << parr[i] << endl;
	}

	for (int i = 0; i < SIZE; ++i)
	{
		cout << i[parr] << endl;
	}

	for (int i = 0; i < SIZE; ++i)
	{
		cout << i[arr] << endl;
	}

	for (int i = 0; i < SIZE; ++i)
	{
		cout << *(parr + i) << endl;
	}

	for (int i = 0; i < SIZE; ++i)
	{
		cout << *(arr + i) << endl;
	}
	
	cout << arr << endl;
	cout << *arr << endl;
	
	int c = 5;
	foo(&c);
	cout << c << endl;
	
	int d = 0;
	int e = 1;
	cout << d << endl;
	cout << e << endl;
	foo2(&d, &e);
	cout << d << endl;
	cout << e << endl;
}