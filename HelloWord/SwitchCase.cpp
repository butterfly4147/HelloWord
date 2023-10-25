#include <iostream>

using namespace std;

int main()
{
	char answer;

	cout << "请问可以格式化您的硬盘吗？！【Y/N】" << "\n";
	cin >> answer;

	switch (answer)
	{
	case 'Y':
	case 'y':
		cout << "随便格式化硬盘是不好的，会让妈妈骂的~" << "\n";
		break;
	case 'N':
	case 'n':
		cout << "您的选择是明智的！" << "\n";
		break;
	}

	system("pause");

	return 0;
}