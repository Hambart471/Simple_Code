#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
	string path = "draft.txt";
	ofstream fout;
	fout.open(path);
	// If you want to add to the file instead of replacing
	// fout.open(path, ofstream::app);
	if (!fout.is_open())
	{
		cout << "Failed to open the file" << endl;
	}
	else
	{
		cout << "Enter data: ";
		string a;
		cin >> a;
		fout << a << endl;
	}
	fout.close();
	ifstream fin;
	fin.open(path);
	if (!fin.is_open())
	{
		cout << "Failed to open the file" << endl;
	}
	else
	{
		//string a;
		//fin >> a;
		//cout << a;

		//char ch;
		//while (fin.get(ch))
		//{
		//	cout << ch;
		//}

		string str;
		while (!fin.eof())
		{
			str = "";
			getline(fin, str);
			cout << str;
		}
	}
	fin.close();
}