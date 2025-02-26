#include <iostream>
using namespace std;

void fill_array(int* const arr, const int SIZE)
{
	for (int i = 0; i < SIZE; ++i)
	{
		arr[i] = rand() % SIZE;
	}
}

void show_array(const int* const arr, const int SIZE)
{
	for (int i = 0; i < SIZE; ++i)
	{
		cout << arr + i << ":";
		cout << "\t" << arr[i] << endl;
	}
}

void push_back(int*& arr, int& size, const int value)
{
	int* new_arr = new int[size + 1];
	for (int i = 0; i < size; ++i)
	{
		new_arr[i] = arr[i];
	}
	new_arr[size] = value;
	++size;
	delete[] arr;
	arr = new_arr;
	new_arr = nullptr;
}

void pop_back(int*& arr, int& size)
{
	int* new_arr = new int[--size];
	for (int i = 0; i < size; ++i)
	{
		new_arr[i] = arr[i];
	}
	delete[] arr;
	arr = new_arr;
	new_arr = nullptr;
}

void copy_array(const int* const arr, int*& arr2, const int SIZE)
{
	delete[] arr2;
	arr2 = new int[SIZE];
	for (int i = 0; i < SIZE; ++i)
	{
		arr2[i] = arr[i];
	}
}

int main()
{
	int size2;
	cin >> size2;
	int* arr3 = new int[size2];
	for (int i = 0; i < size2; ++i)
	{
		cout << arr3[i] << endl;
		cout << arr3 + i << endl;
		cout << *(arr3 + i) << endl;
	}
	delete[] arr3;
	arr3 = nullptr;

	int size;
	cin >> size;
	int* arr = new int[size];
	fill_array(arr, size);
	show_array(arr, size);
	cout << "================" << endl;
	int* arr2 = new int[size];
	fill_array(arr2, size);
	show_array(arr2, size);
	cout << "================" << endl;
	copy_array(arr, arr2, size);
	show_array(arr2, size);
	delete[] arr;
	arr = nullptr;
	delete[] arr2;
	arr2 = nullptr;

	int size3;
	cin >> size3;
	int* arr4 = new int[size3];
	fill_array(arr4, size3);
	show_array(arr4, size3);
	int value;
	cin >> value;
	push_back(arr4, size3, value);
	show_array(arr4, size3);
	pop_back(arr4, size3);
	pop_back(arr4, size3);
	show_array(arr4, size3);
	delete[] arr4;
	arr4 = nullptr;
}
