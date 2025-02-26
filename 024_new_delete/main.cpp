#include <iostream>
using namespace std;

int main()
{
	int* pa = new int;
	*pa = 1;
	delete pa;
}