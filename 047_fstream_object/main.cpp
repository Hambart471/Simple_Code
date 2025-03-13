#include <iostream>
#include <fstream>
using namespace std;

class Point
{
public:
	Point()
	{
		x = y = z = 0;
	}
	Point(int x, int y, int z)
	{
		this->x = x;
		this->y = y;
		this->z = z;
	}
	void Print()
	{
		cout << "x: " << x << "\ty: " << y << "\tz: " << z << endl;
	}
	int x;
	int y;
	int z;
};

int main()
{
	string path = "draft.txt";
	Point point(5, 10, 46);
	point.Print();

	ofstream fout;
	fout.open(path);

	if (!fout.is_open())
	{
		cout << "Failed to open file" << endl;
	}
	else
	{
		cout << "File is open" << endl;
		fout.write(reinterpret_cast<char*>(&point), sizeof(Point));
	}
	fout.close();

	ifstream fin;
	fin.open(path);

	if (!fin.is_open())
	{
		cout << "Failed to open file" << endl;
	}
	else
	{
		cout << "File is open" << endl;
		Point point2;
		while (fin.read(reinterpret_cast<char*>(&point2), sizeof(Point)))
		{
			point2.Print();
		}
	}
	fin.close();
}
