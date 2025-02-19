#include <iostream>
using namespace std;

int main()
{
	cout << sizeof(int) << endl;

	int a;
	cout << sizeof(a) << endl;

	const int SIZE = 10;
	int arr[SIZE];
	for (int i = 0; i < SIZE; ++i)
	{
		arr[i] = i;
		cout << arr[i] << endl;
	}
	cout << sizeof(arr) << endl;

	int arr2[]{ 0,1,2,3,4 };
	for (int i = 0; i < sizeof(arr2) / sizeof(arr2[0]); ++i)
	{
		cout << arr2[i] << endl;
	}
}