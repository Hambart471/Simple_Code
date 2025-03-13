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
	int x;
	int y;
	int z;
};

ostream& operator<<(ostream& os, const Point& point)
{
	os << point.x << " " << point.y << " " << point.z;
	return os;
}

istream& operator>>(istream& is, Point& point)
{
	is >> point.x >> point.y >> point.z;
	return is;
}

int main()
{
	Point point(121, 245, 241);
	cout << point << endl;

	string path = "draft.txt";
	fstream fs;
	fs.open(path, fstream::in | fstream::out | fstream::app);
	if (!fs.is_open())
	{
		cout << "Failed to open file" << endl;
	}
	else
	{
		cout << "File is open" << endl;
		//fs << point << "\n";
		while (true)
		{
			Point point2;
			fs >> point2;
			if (fs.eof())
			{
				break;
			}
			cout << point2 << endl;
		}
	}
	fs.close();
}
