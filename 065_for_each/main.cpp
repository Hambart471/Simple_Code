#include <iostream>
#include <vector>
#include <list>
using namespace std;

// Works same as for each
template<typename T>
void Print_List(const list<T>& list)
{
	for (auto i = list.cbegin(); i != list.cend(); ++i)
	{
		cout << *i << endl;
	}
}

int main()
{
	int arr[]{ 0,1,2,3 };
	list<int> my_list{ 0,1,2,3 };

	for (int var : arr)
	{
		cout << var << endl;
	}

	cout << endl;

	for (auto var : arr)
	{
		cout << var << endl;
	}

	cout << endl;

	for (auto& var : arr)
	{
		var = 1;
	}

	for (auto var : arr)
	{
		cout << var << endl;
	}
	
	for (auto var : my_list)
	{
		cout << var << endl;
	}
}