#include <iostream>
#include <thread>
#include <chrono>
using namespace std;

void thread_function(int a, int b)
{
	this_thread::sleep_for(1s);
	cout << "thread_function() started" << endl;
	this_thread::sleep_for(1s);
	cout << "a + b = " << a + b << endl;
	this_thread::sleep_for(1s);
	cout << "thread_function() stopped" << endl;
}

int main()
{
	thread t(thread_function, 2, 2);

	for (int i = 0; true; ++i)
	{
		cout << "Thread id: " << this_thread::get_id() << " main() " << i << endl;
	this_thread::sleep_for(0.3s);
	}

	t.join();
}