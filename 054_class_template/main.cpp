#include <iostream>
using namespace std;

template<typename T>
class Type_Size
{
public:
	Type_Size(T value)
	{
		this->value = value;
	}
	void type_size()
	{
		cout << sizeof(value) << endl;
	}
protected:
	T value;
};

template<typename T>
class Type_Info :public Type_Size<T>
{
public:
	Type_Info(T value) :Type_Size<T>(value)
	{

	}

	void show_type_name()
	{
		cout << typeid(this->value).name() << endl;
	}
};

template<typename T>
class Printer
{
public:
	void Print(T value)
	{
		cout << value << endl;
	}
};

// You can restrict using method print for double like this
template<>
class Printer<double>
{
public:
	
};

template<>
class Printer<bool>
{
public:
	void Print(bool value)
	{
		cout << "Bool: " << value << endl;
	}
};

int main()
{
	int a = 1;
	Type_Info<int> type_Info(a);
	type_Info.type_size();
	type_Info.show_type_name();
	Printer<bool> printer;
	printer.Print(true);
}