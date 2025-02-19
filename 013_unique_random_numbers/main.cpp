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
}
