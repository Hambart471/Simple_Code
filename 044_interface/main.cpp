#include <iostream>
using namespace std;

// All methods in Interface should be pure virtual
class IBicycle
{
public:
	void virtual turn() = 0;
	void virtual ride() = 0;
};

class Simple_Bicycle :public IBicycle
{
public:
	void turn() override
	{

	}
	void ride() override
	{

	}
};

class Human
{
public:
	void ride_on(IBicycle& iBicycle)
	{
		iBicycle.ride();
	}
};

int main()
{
}