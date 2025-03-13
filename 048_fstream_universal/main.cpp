#include <iostream>
#include <fstream>
// Only for Windows
#include <Windows.h>
using namespace std;

int main()
{
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
		cout << "Enter 1 to input value or enter 2 to write out the values: ";
		string msg;
		int a;
		cin >> a;
		if (a == 1)
		{
			//Only to include Russian language. Also needed to switch back
			SetConsoleCP(1251);
			cin >> msg;
			fs << msg << "\n";
			//Return to default
			SetConsoleCP(866);
		}
		else if (a == 2)
		{
			while (!fs.eof())
			{
				msg = "";
				fs >> msg;
				cout << msg;
			}
		}
	}
	fs.close();
}
