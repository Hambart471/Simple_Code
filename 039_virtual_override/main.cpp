// Reviewed

#include <iostream>
using namespace std;

class Item
{
public:
	virtual void get_durability() = 0;
};

class Gun :public Item
{
public:
	void get_durability() override
	{
		cout << "Gun durability: 100/100" << endl;
	}
	virtual void shoot()
	{
		cout << "BANG!" << endl;
	}
};

class Submachine_Gun :public Gun
{
public:
	void get_durability() override
	{
		cout << "Submachine Gun durability: 100/100" << endl;
	}
	void shoot() override
	{
		cout << "BANG! BANG! BANG!" << endl;
	}
};

class Player
{
public:
	void shoot(Gun& gun)
	{
		gun.shoot();
	}
	void check_durability(Item& item)
	{
		item.get_durability();
	}
};

int main()
{
	Gun gun;
	gun.get_durability();
	gun.shoot();
	cout << endl;

	Submachine_Gun submachine_Gun;
	submachine_Gun.get_durability();
	submachine_Gun.shoot();
	cout << endl;

	Item* pitem = &gun;
	pitem->get_durability();
	pitem = &submachine_Gun;
	pitem->get_durability();
	cout << endl;

	Gun* pgun = &gun;
	pgun->shoot();
	pgun = &submachine_Gun;
	pgun->shoot();
	cout << endl;

	Player player;
	player.check_durability(gun);
	player.check_durability(submachine_Gun);
	cout << endl;

	player.shoot(gun);
	player.shoot(submachine_Gun);
}