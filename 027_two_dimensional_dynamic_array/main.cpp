#include <iostream>
using namespace std;

int main()
{
	int rows;
	cin >> rows;
	int cols;
	cin >> cols;
	int** arr = new int* [rows];
	for (int i = 0; i < rows; ++i)
	{
		arr[i] = new int[cols];
	}
	for (int i = 0; i < rows; ++i)
	{
		cout << arr[i] << ":" << endl;
		for (int j = 0; j < cols; ++j)
		{
			cout << arr[i][j] << endl;
		}
		cout << endl;
	}
	for (int i = 0; i < rows; ++i)
	{
		delete[] arr[i];
		arr[i] = nullptr;
	}
	delete[] arr;
	arr = nullptr;
}
