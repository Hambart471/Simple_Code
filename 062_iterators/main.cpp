#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int arr[]{ 2,6,9 };
	cout << arr[1] << endl;
	cout << *(arr + 1) << endl;

	vector<int> my_vector{ 1,9,44,422,676,78 };
	cout << my_vector[1] << endl;
	vector<int>::iterator it;
	// Pointer at the beginning
	it = my_vector.begin();
	cout << *it << endl;
	*it = 2;
	cout << *it << endl;
	++*it;
	cout << *it << endl;
	++it;
	cout << *it << endl;
	cout << endl;
	for (vector<int>::iterator it2 = my_vector.begin(); it2 != my_vector.end(); ++it2)
	{
		cout << *it2 << endl;
	}
	// If you don't want data to change
	for (vector<int>::const_iterator it2 = my_vector.begin(); it2 != my_vector.end(); ++it2)
	{
		cout << *it2 << endl;
	}
	// If you want to get const iterator
	for (vector<int>::const_iterator it2 = my_vector.cbegin(); it2 != my_vector.cend(); ++it2)
	{
		cout << *it2 << endl;
	}
	// If you want to iterate backwards
	for (vector<int>::reverse_iterator it2 = my_vector.rbegin(); it2 != my_vector.rend(); ++it2)
	{
		cout << *it2 << endl;
	}
	// Move iterator
	vector<int>::iterator it2 = my_vector.begin();
	cout << *(it + 3) << endl;
	advance(it, 3);
	// Add element 7 at the place of the iterator and move everything else
	my_vector.insert(it, 7);
	my_vector.erase(it);
	// all elements from it to it + 3
	my_vector.erase(it, it + 3);
}