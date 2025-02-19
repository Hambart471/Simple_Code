#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	srand(time(nullptr));

	const int SIZE = 10;
	int arr[SIZE];

	for (int i = 0; i < SIZE;)
	{
		int random_number = rand() % SIZE;
		bool unique = true;

		for (int j = 0; j < i; ++j)
		{
			if (random_number == arr[j])
			{
				unique = false;
				break;
			}
		}
		if (unique)
		{
			arr[i] = random_number;
			++i;
		}
	}

	for (int i = 0; i < SIZE; ++i)
	{
		cout << i << " = " << arr[i] << endl;
	}

	int min_number = arr[0];
	for (int i = 1; i < SIZE; ++i)
	{
		if (arr[i] < min_number)
		{
			min_number = arr[i];
		}
	}

	cout << "Minimum number is " << min_number << endl;
}
