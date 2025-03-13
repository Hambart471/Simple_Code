#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> my_vector;

	my_vector.push_back(rand());
	my_vector.push_back(rand());
	my_vector.push_back(rand());
	my_vector.push_back(rand());
	my_vector.push_back(rand());
	my_vector.push_back(rand());
	my_vector.push_back(rand());

	cout << "Size: " << my_vector.size() << endl << endl;
	// When you add an element sometimes vector allocates more space to work faster
	cout << "Capacity " << my_vector.capacity() << endl << endl;
	// We can reserve capacity on our own, size will not change
	my_vector.reserve(100);
	// If we reserved too much capaciti, we can always shrink to size
	my_vector.shrink_to_fit();

	// Like that we can creat a vector with the size of 20 and filled with zeroes
	vector<int> my_vector2(20);
	// Or fill it with ones
	vector<int> my_vector3(20, 1);
	// We can resize it and fill with zeroes again
	my_vector3.resize(10);
	// Or ones
	my_vector3.resize(10, 1);

	for (int i = 0; i < my_vector.size(); ++i)
	{
		cout << my_vector[i] << endl;
	}

	my_vector.clear();
	// We can check if there are any elements in our vector
	my_vector.empty();

	cout << endl;
	cout << "Size: " << my_vector.size() << endl;

	my_vector.push_back(rand());
	my_vector.push_back(rand());
	my_vector.push_back(rand());

	my_vector.pop_back();

	vector<int> my_vector4{ 0,1,2 };

	my_vector[0];
	// Same method but safe and slow
	my_vector.at(0);

	try
	{
		my_vector.at(10);
	}
	catch (out_of_range& e)
	{
		cout << endl;
		cout << "Out of range exception: " << e.what() << endl;
	}
}