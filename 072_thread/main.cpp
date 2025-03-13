#include <iostream>
#include <thread>
#include <chrono>
using namespace std;

void random_function()
{
	this_thread::sleep_for(chrono::milliseconds(250));
	for (int i = 0; i < 10; ++i)
	{
		cout << i << ". Thread id: " << this_thread::get_id() << " random_function()" << endl;
		this_thread::sleep_for(chrono::milliseconds(500));
	}
	cout << 10 << ". Thread id: " << this_thread::get_id() << " random_function()" << endl;
}

void random_function2()
{
	for (int i = 0; i < 10; ++i)
	{
		cout << i << ". Thread id: " << this_thread::get_id() << " random_function2()" << endl;
		this_thread::sleep_for(chrono::milliseconds(500));
	}
	cout << 10 << ". Thread id: " << this_thread::get_id() << " random_function2()" << endl;
}

int main()
{
	thread t(random_function2);
	
	random_function();

	// Detaches thread t from main. When the main will finish, t will stop
	//t.detach();
	// main will wait untill t will finish first and then will start working
	//t.join();

	this_thread::sleep_for(chrono::milliseconds(250));
	for (int i = 0; i < 10; ++i)
	{
		cout << i << ". Thread id: " << this_thread::get_id() << " main()" << endl;
		this_thread::sleep_for(chrono::milliseconds(250));
	}
	cout << 10 << ". Thread id: " << this_thread::get_id() << " main()" << endl;

	// We wait untill t will finish the job
	t.join();
}