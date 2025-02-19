#include <iostream>
using namespace std;

template<typename T>
void foo(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}

int main()
{
	int* pb;
	//int& bref;
	
	int* pc = nullptr;
	//int& cref = nullptr;

	int a = 5;
	int b = 0;
	int& aref = a;
	//&aref = &b;
	int* pa = &a;
	cout << &aref << endl;
	cout << &pa << endl;
	cout << pa << endl;
	cout << aref << endl;
	int* paref = &aref;
	cout << paref << endl;
	cout << *paref << endl;
	cout << pa + 1 << endl;
	cout << &aref + 2 << endl;
	*(&aref + 2) = 1;
	cout << *(& aref + 2) << endl;
	int value1 = 0;
	int value2 = 0;
	foo(value1, value2);
}