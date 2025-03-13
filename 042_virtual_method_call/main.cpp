#include <iostream>
using namespace std;

class Msg
{
public:
	Msg(string msg)
	{
		this->msg = msg;
	}
	virtual string get_msg()
	{
		return msg;
	}
private:
	string msg;
};

class Brakets_Msg :public Msg
{
public:
	Brakets_Msg(string msg) :Msg(msg)
	{
	}
	// If method was not virtual we could use it without "Msg::"
	string get_msg() override
	{
		return "[" + Msg::get_msg() + "]";
	}
};

class Printer
{
public:
	void print(Msg& msg)
	{
		cout << msg.get_msg() << endl;
	}
};

int main()
{
	Printer printer;
	Brakets_Msg brakets_Msg("Hello");
	printer.print(brakets_Msg);
}
