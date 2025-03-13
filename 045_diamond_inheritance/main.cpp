#include <iostream>
using namespace std;

class Component
{
public:
	Component(string company_name)
	{
		cout << "Constructor Component" << endl;
		this->company_name = company_name;
	}
	string company_name;
};

class GPU :public Component
{
public:
	GPU(string company_name) :Component(company_name)
	{
		cout << "Constructor GPU" << endl;
	}
};

class Memory :public Component
{
public:
	Memory(string company_name) :Component(company_name)
	{
		cout << "Constructor Memory" << endl;
	}
};

class Graphic_Card :public GPU, public Memory
{
public:
	Graphic_Card(string gpu_company_name, string memory_company_name) :GPU(gpu_company_name), Memory(memory_company_name)
	{
		cout << "Constructor Graphic_Card" << endl;
	}
};

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Character
{
public:
	Character()
	{
		cout << "Constructor Character" << endl;
	}
	int HP;
};

class Orc :public virtual Character
{
public:
	Orc()
	{
		cout << "Constructor Orc" << endl;
	}
};

class Warrior :public virtual Character
{
public:
	Warrior()
	{
		cout << "Constructor Warrior" << endl;
	}
};

class Orc_Warrior :public Orc, public Warrior
{
public:
	Orc_Warrior()
	{
		cout << "Constructor Orc_Warrior" << endl;
	}
};

int main()
{
	Graphic_Card graphic_Card("AMD", "Samsung");
	cout << endl;
	Orc_Warrior orc_Warrior;
}