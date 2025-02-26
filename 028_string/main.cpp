#include <iostream>
using namespace std;

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
	string result1;
	result1 = str5 + str6 + "!";
	cout << result1 << endl;
}
