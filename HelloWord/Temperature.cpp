#include <iostream>

using namespace std;

int main()
{
	// �����¶� == �����¶� * 9.0 / 5.0 + 32

	const unsigned short ADD_SUBTRACT = 32;
	const double RATIO = 9.0 / 5.0;

	double tempIn, tempOut;
	char typeIn, typeOut;

	cout << "�������ԡ�xx.x C�����ߡ�xx.c F����ʽ����һ���¶ȣ�";
	cin >> tempIn >> typeIn;
	cin.ignore(100, '\n'); // �������ݱ߽紦��
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
		cout << "�������" << "\n\n";
	}

	cin.get();

	system("pause");

	return 0;
}