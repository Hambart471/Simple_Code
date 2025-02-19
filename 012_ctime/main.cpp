#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	//srand(0);
	srand(time(nullptr));
	cout << rand() << endl;
	cout << rand()%10 << endl;
	cout << rand()%10+5 << endl;
}
