#include <iostream>

using namespace std;

int main()
{
	char answer;

	cout << "���ʿ��Ը�ʽ������Ӳ���𣿣���Y/N��" << "\n";
	cin >> answer;

	switch (answer)
	{
	case 'Y':
	case 'y':
		cout << "����ʽ��Ӳ���ǲ��õģ������������~" << "\n";
		break;
	case 'N':
	case 'n':
		cout << "����ѡ�������ǵģ�" << "\n";
		break;
	}

	system("pause");

	return 0;
}