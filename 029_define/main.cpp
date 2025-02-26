#include <iostream>
#define FOO(x,y)((x)*(y))
#define PI 3.14
#define tab "\t"
#define begin {
#define end }
#define DEBUG
#define DEBUG2 1
using namespace std;

int main()
{
	cout << PI << endl;
	cout << "*\t*" << endl;
	cout << "*" << tab << "*" << endl;
	for (int i = 0; i < 5; ++i)
	begin
		cout << i << endl;
	end
	cout << FOO(5, 6) << endl;
	//begin();

#ifdef DEBUG
	cout << "Debug is defined" << endl;
#else
	cout << "Debug is not defined" << endl;
#endif
	for (int i = 0; i < 5; ++i)
	{
		cout << i << endl;
	}
#ifndef DEBUG
	cout << "Debug is not defined" << endl;
#else
	cout << "Debug is defined" << endl;
#endif

#if DEBUG2 > 0
	cout << "DEBUG2 is positive" << endl;
#elif DEBUG2 == 0
	cout << "DEBUG2 equals 0" << endl;
#else
	cout << "DEBUG2 is negative" << endl;
#endif
}
