#include <fstream>
#include <iostream>

using namespace std;

int main()
{
	fstream fp("test.txt", ios::in | ios::out);
	if (!fp)
	{
		cerr << "���ļ�ʧ��" << endl;
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
//	fstream fp("test.txt", ios::in | ios::out);  // ʹ��λ����� | ��ָ��ͬʱ����������ģʽ
//	if (!fp)
//	{
//		cerr << "���ļ�ʧ��" << endl;
//		return 0;
//	}
//
//	fp << "Ilovefishc.com!";
//
//	static char str[15];  // �� char �����С����Ϊ������ "Ilovefishc.com!"
//
//	fp.seekg(0, ios::beg);  // ʹ�� std::ios_base::beg ���� ios::beg ��ָ����������Ŀ�ʼλ��
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