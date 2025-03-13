#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	string path = "draft.txt";
	ifstream fin;
	fin.exceptions(ifstream::badbit | ifstream::failbit);

	try
	{
		fin.open(path);
	}
	catch (ifstream::failure& e)
	{
		cout << "Exception: " << e.what() << "\n" << e.code() << endl;
	}
	catch (exception& e)
	{
		cout << "Exception: " << e.what() << endl;
	}
}