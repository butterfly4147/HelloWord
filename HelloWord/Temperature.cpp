#include <iostream>

using namespace std;

int main()
{
	// 华氏温度 == 摄氏温度 * 9.0 / 5.0 + 32

	const unsigned short ADD_SUBTRACT = 32;
	const double RATIO = 9.0 / 5.0;

	double tempIn, tempOut;
	char typeIn, typeOut;

	cout << "请亲们以【xx.x C】或者【xx.c F】格式输入一个温度：";
	cin >> tempIn >> typeIn;
	cin.ignore(100, '\n'); // 输入数据边界处理
	cout << "\n";

	switch (typeIn)
	{
	case 'C':
	case 'c':
		tempOut = tempIn * RATIO + ADD_SUBTRACT;
		typeOut = 'F';
		typeIn = 'C';
		break;
	case 'F':
	case 'f':
		tempOut = (tempIn - ADD_SUBTRACT) / RATIO;
		typeOut = 'C';
		typeIn = 'F';
		break;
	default:
		typeOut = 'E';
		break;
	}

	if (typeOut != 'E')
	{
		cout << tempIn << typeIn
			<< " = " << tempOut
			<< typeOut << "\n\n";
	}
	else
	{
		cout << "输入错误！" << "\n\n";
	}

	cin.get();

	system("pause");

	return 0;
}