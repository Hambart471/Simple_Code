#include <iostream>
using namespace std;

class My_String
{
public:
	My_String()
	{
		str = nullptr;
		length = 0;
	}
	My_String(const char* const str)
	{
		length = strlen(str);
		this->str = new char[++length];
		for (int i = 0; i < length - 1; ++i)
		{
			this->str[i] = str[i];
		}
		this->str[length - 1] = '\0';
	}
	My_String(const My_String& my_String)
	{
		length = strlen(my_String.str);
		str = new char[++length];
		for (int i = 0; i < length - 1; ++i)
		{
			str[i] = my_String.str[i];
		}
		str[length - 1] = '\0';
	}
	My_String(My_String&& my_String)
	{
		str = my_String.str;
		my_String.str = nullptr;
		length = my_String.length;
	}
	My_String& operator = (const My_String& my_String)
	{
		if (str != nullptr)
		{
			delete[] str;
		}
		length = strlen(my_String.str);
		str = new char[++length];
		for (int i = 0; i < length - 1; ++i)
		{
			str[i] = my_String.str[i];
		}
		str[length - 1] = '\0';
		return *this;
	}
	My_String operator + (const My_String& my_String)
	{
		My_String result;
		result.length = strlen(str) + strlen(my_String.str);
		result.str = new char[++result.length];
		int i = 0;
		for (; i < strlen(str); ++i)
		{
			result.str[i] = str[i];
		}
		for (int j = 0; j < strlen(my_String.str); ++i, ++j)
		{
			result.str[i] = my_String.str[j];
		}
		result.str[result.length - 1] = '\0';
		return result;
	}
	void print()
	{
		cout << str << endl;
	}
	int my_strlen()
	{
		int i = 0;
		for (; str[i] != '\0'; ++i)
		{
		}
		return i;
	}
	int get_length()
	{
		return length;
	}
	bool operator==(const My_String& my_String)
	{
		if (length != my_String.length)
		{
			return false;
		}
		for (int i = 0; i < length; ++i)
		{
			if (str[i] != my_String.str[i])
			{
				return false;
			}
		}
		return true;
	}
	bool operator!=(const My_String& my_String)
	{
		return !(operator==(my_String));
	}
	char& operator[](int index)
	{
		return str[index];
	}
	~My_String()
	{
		delete[] str;
	}
private:
	char* str;
	int length;
};

void foo(const char* str)
{
	cout << strlen(str) << endl;
	cout << str << endl;
}

int main()
{
	char string0[] = "Hello, World!";
	cout << string0 << endl;
	char string2[] = { 'a' };
	cout << string2 << endl;
	char string3[] = { 'a', '\0' };
	cout << string3 << endl;
	cout << strlen(string0) << endl;
	cout << strlen(string2) << endl;
	cout << strlen(string3) << endl;
	const char* string4 = "Hello, World2!";
	cout << string4 << endl;
	const char* string5 = string0;
	cout << string5 << endl;
	const char* strArr[] = { "Hello", "World" };
	for (int i = 0; i < 2; ++i)
	{
		cout << strArr[i] << endl;
	}
	foo(string4);
	char str1[255] = "Hello";
	char str2[255] = "World";
	cout << str1 << endl;
	strcat_s(str1, str2);
	cout << str1 << endl;

	char result[255]{};
	char str3[255] = "Hello";
	char str4[255] = "World";
	strcat_s(result, str3);
	strcat_s(result, str4);
	cout << result << endl;
	string str5 = "Hello";
	string str6 = "World";
	string result1 = str5 + str6 + "!";
	cout << result1 << endl;
	My_String my_string("Ham");
	my_string.print();
	My_String my_string1("471");
	my_string1.print();
	my_string = my_string1;
	my_string.print();
	My_String my_string2;
	my_string2 = my_string + my_string1;
	my_string2.print();
	cout << my_string.get_length() << endl;
	cout << my_string1.get_length()  << endl;
	cout << my_string2.get_length() << endl;
	cout << (my_string == my_string1) << endl;
	cout << (my_string1 == my_string2) << endl;
}
