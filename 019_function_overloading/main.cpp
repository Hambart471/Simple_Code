#include <iostream>
using namespace std;

int sum(int a, int b)
{
	return a + b;
}

double sum(double a, double b, double c)
{
	return a + b + c;
}

int main()
{
	cout << sum(1, 2) << endl;
	cout << sum(1.2, 2.3, 3.4) << endl;
}