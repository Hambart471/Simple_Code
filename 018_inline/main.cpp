#include <iostream>
using namespace std;

inline int sum(int a, int b)
{
	return a + b;
}

int main()
{
	cout << sum(2, 2) << endl;
	cout << 2 + 2 << endl;
}