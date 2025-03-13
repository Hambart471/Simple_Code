#include <iostream>
using namespace std;
using namespace first;

namespace first
{
	void foo()
	{

	}
}

namespace second
{
	void foo()
	{

	}
}

int main()
{
	first::foo();
	second::foo();
}