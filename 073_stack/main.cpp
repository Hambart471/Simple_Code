// Container adapter
#include <iostream>
#include <stack>
#include <vector>
#include <list>
#include <deque>
using namespace std;

int main()
{
	stack<int> s;
	// Creates a copy and adds it
	s.push(1);
	s.pop();
	// Creates an object directly
	s.emplace(2);
	s.size();
	// returns bool
	s.empty();
	// shows what is at top
	s.top();
	while (!s.empty())
	{
		cout << s.top() << endl;
		s.pop();
	}
	// Be default deque is used
	auto a = s._Get_container();
	// Now you can work with a as a normal deque
	cout << a[0] << endl;
	stack<int, vector<int>> sv;
	/*? ???? ?? ????? ? get_container :

	stack<int, deque<int> > st;



	st.push(1);

	st.push(2);

	st.push(3);

	st.emplace(9);



	deque<int> myDeque;

	while (!st.empty())

	{

		myDeque.push_back(st.top());

		st.pop();

	}



	for (const auto item : myDeque)

	{

		cout << item << endl;

	}*/
}