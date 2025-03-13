// Static array

#include <iostream>
#include <array>
using namespace std;

int main()
{
	// Also need to set a size
	array<int, 20> arr{ rand(),rand(),rand() };
	cout << arr[0] << endl;
	// Safe, slow and throws exception
	cout << arr.at(0) << endl;
	cout << arr.size() << endl;
	arr.fill(1);
	//First element
	arr.front();
	arr.back();
	array<int, 2>arr2{ 1,2 };
	array<int, 2>arr3{ 0,3 };
	// Works for other containers
	// != > < works too
	// Elements must be able to work with these operators
	bool result = arr2 == arr3;
	cout << result << endl;
}