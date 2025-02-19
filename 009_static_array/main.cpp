#include <iostream>
using namespace std;

void fill_array(int arr[], const int SIZE)
{
	for (int i = 0; i < SIZE; ++i)
	{
		arr[i] = rand();
	}
}

void print_array(int arr[], const int SIZE)
{
	for (int i = 0; i < SIZE; ++i)
	{
		cout << arr[i] << endl;
	}
}

int main()
{
	char arr0[1];
	char arr1[]{ 'a','b' };
	char arr2[2]{ 'a','b' };
	char arr3[3]{ 'a','b' };
	char arr4[3]{};

	const int SIZE = 10;
	int arr5[SIZE];
	fill_array(arr5, SIZE);
	print_array(arr5, SIZE);
}