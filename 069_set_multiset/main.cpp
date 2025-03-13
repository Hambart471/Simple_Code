// Binary tree
#include<iostream>
#include<set>
using namespace std;

int main()
{
	set<int> s{ 572,9,7 };
	// First value is a root
	// Returns a pair first one contains an iterator that points at the element second one returns 1 or 0
	// depends on success, if element already exists it returns 0
	s.insert(5);
	s.insert(1);
	s.insert(1);
	s.insert(1);
	s.insert(1);
	s.insert(1);
	s.insert(12);
	// Set always sorts elements
	for (int i : s)
		cout << i << endl;
	// Set, unlike multiset, only stores unique values!
	for (int i = 0; i < 20; ++i)
	{
		s.insert(rand() % 10);
	}
	for (int i : s)
		cout << i << endl;
	// You can't change elements of set!
	// You can only find it, delete and add new
	// If find(n) finds the value it returns the iterator on it
	set<int>::iterator it = s.find(1);
	// If not it returns iterator that points at the place AFTER the last element
	s.end();
	int value = 1;
	if (s.find(value) != s.end())
	{
		cout << value << " exists" << endl;
	}
	else
	{
		cout << value << " doesn't exist" << endl;
	}
	// If erase fails it returns 0 if not it returns 1
	s.erase(1);
	if (s.find(value) != s.end())
	{
		cout << value << " exists" << endl;
	}
	else
	{
		cout << value << " doesn't exist" << endl;
	}
	multiset<int> ms{ 1,2,1,3,4,4,5 };
	// Finds the first 1
	auto it2 = ms.lower_bound(1);
	// Finds the next element after the last 1
	multiset<int>::iterator it3 = ms.upper_bound(1);
	// returns the range from lower_bound to upper_bound
	auto it3 = ms.equal_range(1);
}