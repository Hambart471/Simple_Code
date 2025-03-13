// Make a doubly linked list

#include <iostream>
using namespace std;

template<typename T>
class List
{
public:
	List();
	void push_front(T data);
	void pop_front();
	void clear();
	~List();
	void insert(int index, T data);
	void push_back(T data);
	void remove_at(int index);
	void pop_back();
	T& operator[](const int index);
	int get_size();
	void print();
private:
	class Node
	{
	public:
		Node(T data = 0, Node* pNext = nullptr)
			:data(data), pNext(pNext) {}
		T data;
		Node* pNext;
	};
	Node* pHead;
	int size;
};

template<typename T>
List<T>::List() :pHead(nullptr), size(0) {}

template<typename T>
void List<T>::push_front(T data)
{
	pHead = new Node(data, pHead);
	++size;
}

template<typename T>
void List<T>::pop_front()
{
	if (!pHead)
		return;
	Node* pDelete = pHead;
	pHead = pHead->pNext;
	delete pDelete;
	--size;
}

template<typename T>
void List<T>::clear()
{
	while (size)
	{
		pop_front();
	}
}

template<typename T>
List<T>::~List()
{
	clear();
}

template<typename T>
void List<T>::insert(int index, T data)
{
	if (index == 0)
	{
		push_front(data);
	}
	else if (index > size)
	{
		return;
	}
	else
	{
		Node* pCurrent = pHead;
		for (int i = 0; i < index - 1; ++i)
		{
			pCurrent = pCurrent->pNext;
		}
		pCurrent->pNext = new Node(data, pCurrent->pNext);
		++size;
	}
}

template<typename T>
void List<T>::push_back(T data)
{
	insert(size, data);
}

template<typename T>
void List<T>::remove_at(int index)
{
	if (index == 0)
	{
		pop_front();
	}
	else if (index > size - 1)
	{
		return;
	}
	else
	{
		Node* pCurrent = pHead;
		for (int i = 0; i < index - 1; ++i)
		{
			pCurrent = pCurrent->pNext;
		}
		Node* pDelete = pCurrent->pNext;
		pCurrent->pNext = pDelete->pNext;
		delete pDelete;
		--size;
	}
}

template<typename T>
void List<T>::pop_back()
{
	remove_at(size - 1);
}

template<typename T>
T& List<T>::operator[](const int index)
{
	Node* pCurrent = pHead;
	for (int i = 0; i < index; ++i)
	{
		pCurrent = pCurrent->pNext;
	}
	return pCurrent->data;
}

template<typename T>
int List<T>::get_size()
{
	return size;
}

template<typename T>
void List<T>::print()
{
	if (pHead == nullptr)
	{
		cout << 0 << endl;
	}
	else
	{
		Node<T>* pCurrent = pHead;
		int i = 1;
		cout << i << "/" << size << endl;
		cout << "pHead = \t" << pHead << endl;
		cout << "pCurrent = \t" << pCurrent << endl;
		cout << "pNext = \t" << pCurrent->pNext << endl;
		cout << "data = \t" << pCurrent->data << endl << endl;
		while (pCurrent->pNext != nullptr)
		{
			pCurrent = pCurrent->pNext;
			cout << ++i << "/" << size << endl;
			cout << "pHead = \t" << pHead << endl;
			cout << "pCurrent = \t" << pCurrent << endl;
			cout << "pNext = \t" << pCurrent->pNext << endl;
			cout << "data = \t" << pCurrent->data << endl << endl;
		}
	}
}

int main()
{
	List<int> list;
	list.push_back(rand());
	list[0] = 10;
	for (int i = 0; i < list.get_size(); ++i)
	{
		cout << list[i] << endl;
	}
}