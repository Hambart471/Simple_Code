#include <iostream>
using namespace std;

class My_Exception :public exception
{
public:
	My_Exception(const char* msg, int data_state) :exception(msg)
	{
		this->data_state = data_state;
	}
	int get_data_state()
	{
		return data_state;
	}
	//const char* what()
	//{
	//	return "My_Exception";
	//}
private:
	int data_state;
};

void foo(int value)
{
	if (value < 0)
	{
		throw runtime_error("Value is lower than 0");
	}
	else if (value == 0)
	{
		throw My_Exception("Number equals 0", value);
	}
	cout << value << endl;
}

int main()
{
	try
	{
		foo(0);
	}
	catch (runtime_error& e)
	{
		cout << "Runtime_error: " << e.what() << endl;
	}
	catch (My_Exception& e)
	{
		cout << "Exception: " << e.what() << endl;
		cout << "Data state: " << e.get_data_state() << endl;
	}
	catch (exception& e)
	{
		cout << "Exception: " << e.what() << endl;
	}
	catch (...)
	{
		cout << "We cought something" << endl;
	}
}