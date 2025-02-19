#include <iostream>
using namespace std;

int main()
{
	cout << "One" << endl;
	goto link;
	cout << "Two" << endl;
	link:
	cout << "Three" << endl;
}