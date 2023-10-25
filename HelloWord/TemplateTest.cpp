#include <iostream>

using namespace std;

template<typename elemType>
void print(elemType *pBegin, elemType *pEnd)
{
	while (pBegin != pEnd)
	{
		cout << *pBegin;
		++pBegin;
	}
}

void print(int* pBegin, int* pEnd)
{
	while (pBegin != pEnd)
	{
		cout << *pBegin;
		++pBegin;
	}
}


void print(char* pBegin, char* pEnd)
{
	while (pBegin != pEnd)
	{
		cout << *pBegin;
		++pBegin;
	}
}

int main()
{
	const unsigned short ITEMS = 5;

	int num[ITEMS] = { 1, 2, 3, 4, 5 };
	char name[ITEMS] = { 'F', 'i', 's', 'h', 'C' };

	print(num, num + 5);
	cout << endl;
	print(name, name+5);
	cout << endl;
}