#include <fstream>
#include <iostream>

using namespace std;

int main()
{
	/*ifstream in;

	in.open("D:\\Users\\BUTTERFLY\\source\\repos\\HelloWord\\x64\\Debug\\test.txt");
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
	in.close();*/
	/*ofstream out;

	out.open("test1.txt");*/
	ofstream out("test.txt", ios::app);
	if (!out)
	{
		cerr << "打开文件失败" << endl;
		return 0;
	}

	for (int i = 0; i < 12; i++)
	{
		out << i;
	}

	out << endl;
	out.close();

	system("pause");

	return 0;
}