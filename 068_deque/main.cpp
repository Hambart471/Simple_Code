// Dobly linked list of small vectors
#include <iostream>
#include <deque>
using namespace std;

int main()
{
	deque<int> dq{ 1,9,94 };
	dq.push_back(1);
	dq.push_front(1);
	dq.at(0);
	deque<int>::iterator it = dq.begin();
	--it;
	++it;
}