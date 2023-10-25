#include <iostream>

using namespace std;

int main()
{
	const unsigned short ITEMS = 5;

	int intArray[ITEMS] = {1, 2, 3, 4, 5};
	char charArray[ITEMS] = {'F', 'i', 's', 'h', 'C'};

	int* intPtr = intArray;
	char* charPtr = charArray;

	cout << "整型数组输出" << "\n";
	for (int i = 0; i < ITEMS; i++)
	{
		//cout << "at "<< reinterpret_cast<unsigned long>(intPtr) <<"\n";
		cout << "at "<< (intPtr) <<"\n";
		intPtr++;
	}

	cout << "字符数组输出" << "\n";
	for (int i = 0; i < ITEMS; i++)
	{
		//cout << "at " << reinterpret_cast<unsigned long>(charPtr) << "\n";
		// char 类型是一种特殊的字符类型，cout 对 char* 的输出有特殊的处理方式。当你使用 (charPtr) 输出时，cout 会将 char* 解释为一个以该指针为起始地址的字符串，并输出字符串的内容。
		cout << "at " << (charPtr) << "\n";
		charPtr++;
	}

	return 0;
}