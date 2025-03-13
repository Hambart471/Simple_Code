// Doubly linked list
#include <iostream>
#include <list>
using namespace std;

template<typename T>
void PrintList(const list<T>& list)
{
	for (auto i = list.cbegin(); i != list.cend(); ++i)
	{
		cout << *i << endl;
	}
}

int main()
{
	// Can't iterate via []
	list<int> my_list{ 1,2,3 };
	my_list.push_front(4);
	my_list.push_back(5);
	list<int>::iterator it = my_list.begin();
	for (list<int>::iterator it2 = my_list.begin(); it2 != my_list.end(); ++it2)
	{
		cout << *it2 << endl;
	}
	++it;
	//but can't do it+=2, but can do
	advance(it, 2);
	my_list.insert(it, 1);
	my_list.erase(it);
	//but if you want to delete the exact value
	my_list.remove(5);
	my_list.sort();
	// reverse sort
	my_list.reverse();
	cout << endl;
	PrintList(my_list);
	my_list.pop_front();
	my_list.pop_back();
	// delete everything and fill list with 2 elements of values 3
	my_list.assign(2, 3);
	// or you can copy one list to another
	list<int> my_list2;
	my_list2.assign(my_list.begin(), my_list.end());
	cout << endl;
	cout << my_list.size() << endl;
	my_list.push_back(1);
	my_list.push_back(1);
	// Deletes duplicates that are close to each other
	my_list.unique();
	my_list.clear();
}