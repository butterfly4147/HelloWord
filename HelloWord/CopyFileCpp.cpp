#include <fstream>
#include <iostream>

using namespace std;

int main()
{
	ifstream in;

	//in.open("D:\\Users\\BUTTERFLY\\source\\repos\\HelloWord\\x64\\Debug\\test.txt");
	in.open("test.txt");
	if (!in)
	{
		cerr << "打开文件失败" << endl;
		return 0;
	}

	char x;
	while (in >> x)
	{
		cout << x;
	}

	cout << endl;
	in.close();

	system("pause");

	return 0;
}