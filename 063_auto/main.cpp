#include <iostream>
#include <vector>
using namespace std;

int main()
{
	auto a = 1;
	// What type is b?
	//auto b;
	vector<int> my_vector{ 11,46,9 };
	vector<int>::iterator it = my_vector.begin();
	auto it2 = my_vector.begin();
}