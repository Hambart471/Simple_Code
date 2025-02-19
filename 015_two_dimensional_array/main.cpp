#include <iostream>
using namespace std;

int main()
{
	const int ROWS = 3;
	const int COLS = 4;
	int arr[ROWS][COLS];

	arr[1][1] = 0;

	int arr2[][COLS]{ {0,1},{0,1} };

	for (int i = 0; i < ROWS; ++i)
	{
		cout << i << ":";
		for (int j = 0; j < COLS; ++j)
		{
			arr[i][j] = rand();
			cout << "\t" << arr[i][j];
		}
		cout << endl;
	}
}