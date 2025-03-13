#include <iostream>
#include <memory>
using namespace std;

template<typename T>
class Smart_Pointer
{
public:
	Smart_Pointer(T* ptr)
	{
		this->ptr = ptr;
	}
	~Smart_Pointer()
	{
		delete ptr;
	}
	T& operator*()
	{
		return *ptr;
	}
private:
	T* ptr;
};

int main()
{
	Smart_Pointer<int> smart_Pointer = new int(5);
	cout << *smart_Pointer << endl;
	
	// Only ap2 will delete data (not used anymore)
	auto_ptr<int> ap1(new int(5));
	auto_ptr<int> ap2(ap1);

	int* p = ap1.get();

	// Makes sure there is only one pointer that points to that address
	unique_ptr<int> up1(new int(5));
	unique_ptr<int> up2;
	up2 = move(up1);
	// Or
	up2.swap(up1);

	// delete and nullptr
	up2.reset();

	// only nullptr
	up2.release();

	int* p1 = up1.get();

	// Many pointers can point to one location. Data will be deleted only when the last pointer will be deleted
	shared_ptr<int> sp1(new int(5));
	shared_ptr<int> sp2(sp1);

	int size = 5;
	//int* arr = new int[size] {1, 6, 44, 9, 8};
	//shared_ptr<int[]> sp3(arr);
	shared_ptr<int[]> sp3(new int[size] {1, 6, 44, 9, 8});
	for (int i = 0; i < size; ++i)
	{
		cout << sp3[i] << endl;
	}
}