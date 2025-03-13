//Implementation of the linked list

#include <iostream>
#include <forward_list>
using namespace std;

int main()
{
	forward_list<int> fl{ rand(),rand()};
	forward_list<int>::iterator it = fl.begin();
	++it;
	// You can't
	//--it;
	for (int i : fl)
	{
		cout << i << endl;
	}
	cout << endl;
	// instead of push_back
	fl.insert_after(it, rand());
	for (int i : fl)
	{
		cout << i << endl;
	}
	cout << endl;
	fl.erase_after(it);
	for (int i : fl)
	{
		cout << i << endl;
	}
	cout << endl;
	//Just to use insert_after if we need it
	forward_list<int>::iterator it2 = fl.before_begin();
}