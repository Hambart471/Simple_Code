// Also is a binary tree but contains a pair, key and value
#include <iostream>
#include <map>
using namespace std;

int main()
{
	pair<int, string> p(1, "Phone");
	cout << p.first << endl;
	cout << p.second << endl;
	map<int, string> m{ {2,"Monitor"} };
	m.insert(p);
	m.insert({ 3,"Mouse" });
	m.insert(make_pair(4, "Microphone"));
	m.insert(pair<int, string>(5, "Speakers"));
	m.emplace(6, "Laptop");
	// Find a key and return a pointer on it, if not found return end
	map<int, string>::iterator it = m.find(1);
	cout << it->first << endl;
	cout << it->second << endl;
	m.end();
	// Map stores only unique keys
	m.emplace(7, "Keyboard");
	m.emplace(7, "Keyboard");
	m.emplace(7, "Processor");
	// As a method insert returns success or not after it's work
	auto it2 = m.emplace(8, "Memory");
	// Takes a key returns a pair, if there is one
	m[7];
	// But prints only value
	cout << m[7] << endl;
	m[7] = "Chair";
	m[9] = "Videocard";
	m.at(8);
	// If there is no such a key then method at(n) will throw an exception
	m.at(10) = "Calendar";
	m.erase(9);
	multimap<int, string> mm;
	mm.emplace(1, "Mobile");
	mm.emplace(1, "Mobile");
	mm.emplace(1, "TV");
	// [] is not working in multimap as well as at(n)
}
