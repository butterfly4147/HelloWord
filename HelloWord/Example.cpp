#include <iostream>

using namespace std;

int main()
{
	const unsigned short ITEMS = 5;

	int intArray[ITEMS] = {1, 2, 3, 4, 5};
	char charArray[ITEMS] = {'F', 'i', 's', 'h', 'C'};

	int* intPtr = intArray;
	char* charPtr = charArray;

	cout << "�����������" << "\n";
	for (int i = 0; i < ITEMS; i++)
	{
		//cout << "at "<< reinterpret_cast<unsigned long>(intPtr) <<"\n";
		cout << "at "<< (intPtr) <<"\n";
		intPtr++;
	}

	cout << "�ַ��������" << "\n";
	for (int i = 0; i < ITEMS; i++)
	{
		//cout << "at " << reinterpret_cast<unsigned long>(charPtr) << "\n";
		// char ������һ��������ַ����ͣ�cout �� char* �����������Ĵ���ʽ������ʹ�� (charPtr) ���ʱ��cout �Ὣ char* ����Ϊһ���Ը�ָ��Ϊ��ʼ��ַ���ַ�����������ַ��������ݡ�
		cout << "at " << (charPtr) << "\n";
		charPtr++;
	}

	return 0;
}