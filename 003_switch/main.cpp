#include <iostream>
using namespace std;

int main()
{
	int number;
	cin >> number;

	switch (number)
	{
	case 0:
		cout << "Your number is 0\n";
		break;
	default:
		cout << "Your number is not 0\n";
		break;
	}
}