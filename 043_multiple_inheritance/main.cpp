#include <iostream>
using namespace std;

class Car
{
public:
	void drive()
	{
	}
};

class Plane
{
public:
	void drive()
	{
	}
	void fly()
	{
	}
};

class Flying_Car :public Car, public Plane
{
};

int main()
{
	Flying_Car flying_Car;
	flying_Car.Car::drive();
	flying_Car.fly();
}