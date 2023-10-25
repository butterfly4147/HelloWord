#include <fstream>
#include <iostream>

using namespace std;

int main()
{
	fstream fp("test.txt", ios::in | ios::out);
	if (!fp)
	{
		cerr << "打开文件失败" << endl;
		return 0;
	}

	fp << "213";

	static char str[20];

	fp.seekg(0, ios::beg);
	fp >> str;
	cout << str << endl;
	//cout << "abc" << endl;

	fp.close();

	system("pause");

	return 0;
}
//#include <fstream>
//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	fstream fp("test.txt", ios::in | ios::out);  // 使用位运算符 | 来指定同时打开输入和输出模式
//	if (!fp)
//	{
//		cerr << "打开文件失败" << endl;
//		return 0;
//	}
//
//	fp << "Ilovefishc.com!";
//
//	static char str[15];  // 将 char 数组大小调整为能容纳 "Ilovefishc.com!"
//
//	fp.seekg(0, ios::beg);  // 使用 std::ios_base::beg 或者 ios::beg 来指定相对于流的开始位置
//
//	fp >> str;
//	cout << str << endl;
//
//	fp.close();
//
//	system("pause");
//
//	return 0;
//}