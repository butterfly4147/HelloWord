#include <iostream>
#include <fstream>
#include <windows.h>
#include <string>

using namespace std;

struct FishOil
{
	string name;
	string uid;
	char sex;
};

bool InitFishC();
bool ReadFishC();
void RecordFishC();
bool WriteFishC(FishOil *OilData);
void MockSleep();
void readFileAndOutput(string filename);
void appendToFile(string filename, string data);
string structToString(FishOil data);

int main()
{
	int i;

	InitFishC();
	while (1)
	{
		cout << "��ѡ����Ҫ���еĲ�����\n";
		cout << "1. ��ӡ���ݵ���Ļ\n";
		cout << "2. ¼������\n";
		cout << "3. �˳�����\n";
		cin >> i;

		switch (i)
		{
		case 1:
			ReadFishC();
			break;
		case 2:
			RecordFishC();
			break;
		case 3:
			return 0;
			//break;
		}
	}

	cout << "��ʼ��ʧ��T_T......\n\n";
	return 0;
}

bool InitFishC()
{
	cout << "��ʼ����ɡ�" << endl;

	return false;
}
bool ReadFishC()
{
	cout << "���ڶ�ȡ����...";
	MockSleep();
	readFileAndOutput("test.txt");
	cout << "��ȡ������ɡ�\n" << endl;

	return false;
}
void RecordFishC()
{
	cout << "��������Ҫ��¼�����ݣ�" << endl;
	FishOil data;
	cout << "������name��" << endl;
	cin >> data.name;
	data.name += "";
	cout << "������uid��" << endl;
	cin >> data.uid;
	data.uid += "";
	cout << "������sex��" << endl;
	cin >> data.sex;
	data.uid += "";
	if (WriteFishC(&data))
	{
		cout << "��¼������ɡ�\n" << endl;
	}
	else
	{
		cout << "��¼����ʧ�ܣ�" << endl;
	}
	return;
}
bool WriteFishC(FishOil* OilData)
{
	appendToFile("test.txt", structToString(*OilData));

	cout << "д��������ɡ�" << endl;

	return true;
}

void MockSleep() {
    int totalProgress = 100;
    int sleepDuration = 10; // ÿ��˯�ߵ�ʱ�䣨���룩

    for (int progress = 0; progress <= totalProgress; progress++) {
        // ���������
        std::cout << "Progress: " << progress << "% [";
        for (int i = 0; i < progress; i++) {
            std::cout << "=";
        }
        std::cout << ">" << std::string(totalProgress - progress, ' ') << "]";
        std::cout << std::flush; // ˢ�����������

        // ģ��˯��
        Sleep(sleepDuration);

        // �ָ����λ�ã��Ա���һ��������ǵ�ǰ������
        std::cout << "\r";
    }

    std::cout << std::endl;
    return;
}

void readFileAndOutput(string filename) {
	std::ifstream file(filename); // �����ļ�����������

	if (file.is_open()) {
		std::string line;
		while (std::getline(file, line)) { // ���ж�ȡ�ļ�����
			std::cout << line << std::endl; // �������׼���
		}
		file.close(); // �ر��ļ�
	}
	else {
		std::cout << "Failed to open file: " << filename << std::endl;
	}
}

void appendToFile(string filename, string data) {
	ofstream file(filename, ios::app); // �����ļ���������󣬲���׷��ģʽ���ļ�

	if (file.is_open()) {
		file << data << endl; // ������д���ļ�
		file.close(); // �ر��ļ�
		cout << "Data appended to file." << endl;
	}
	else {
		cout << "Failed to open file: " << filename << endl;
	}
}

string structToString(FishOil data) {
	string	ss;
	ss = "name: " + data.name + ", uid: " + data.uid + ", sex: " + data.sex;
	return ss;
}