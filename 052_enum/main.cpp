#include <iostream>
using namespace std;

class PC
{
public:
	enum PC_State
	{
		ON,
		OFF,
		SLEEP
	};
	PC_State get_pC_State()
	{
		return pC_State;
	}
	void set_pC_State(const PC_State& pC_State)
	{
		this->pC_State = pC_State;
	}

private:
	PC_State pC_State;
};

enum Speed
{
	MIN = 150,
	RECOMMEND = 600,
	MAX = 800
};

int main()
{
	PC pc;
	pc.set_pC_State(PC::PC_State::ON);

	if (pc.get_pC_State() == PC::PC_State::ON)
	{
		cout << "PC is ON" << endl;
	}

	switch (pc.get_pC_State())
	{
	case PC::PC_State::OFF:
		cout << "PC is OFF" << endl;
		break;
	case PC::PC_State::ON:
		cout << "PC is ON" << endl;
		break;
	case PC::PC_State::SLEEP:
		cout << "PC is SLEEP" << endl;
		break;
	}
}