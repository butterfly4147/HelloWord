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
		cout << "请选择需要进行的操作：\n";
		cout << "1. 打印数据到屏幕\n";
		cout << "2. 录入数据\n";
		cout << "3. 退出程序\n";
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

	cout << "初始化失败T_T......\n\n";
	return 0;
}

bool InitFishC()
{
	cout << "初始化完成。" << endl;

	return false;
}
bool ReadFishC()
{
	cout << "正在读取数据...";
	MockSleep();
	readFileAndOutput("test.txt");
	cout << "读取数据完成。\n" << endl;

	return false;
}
void RecordFishC()
{
	cout << "请输入需要记录的数据：" << endl;
	FishOil data;
	cout << "请输入name：" << endl;
	cin >> data.name;
	data.name += "";
	cout << "请输入uid：" << endl;
	cin >> data.uid;
	data.uid += "";
	cout << "请输入sex：" << endl;
	cin >> data.sex;
	data.uid += "";
	if (WriteFishC(&data))
	{
		cout << "记录数据完成。\n" << endl;
	}
	else
	{
		cout << "记录数据失败！" << endl;
	}
	return;
}
bool WriteFishC(FishOil* OilData)
{
	appendToFile("test.txt", structToString(*OilData));

	cout << "写入数据完成。" << endl;

	return true;
}

void MockSleep() {
    int totalProgress = 100;
    int sleepDuration = 10; // 每次睡眠的时间（毫秒）

    for (int progress = 0; progress <= totalProgress; progress++) {
        // 输出进度条
        std::cout << "Progress: " << progress << "% [";
        for (int i = 0; i < progress; i++) {
            std::cout << "=";
        }
        std::cout << ">" << std::string(totalProgress - progress, ' ') << "]";
        std::cout << std::flush; // 刷新输出缓冲区

        // 模拟睡眠
        Sleep(sleepDuration);

        // 恢复光标位置，以便下一次输出覆盖当前进度条
        std::cout << "\r";
    }

    std::cout << std::endl;
    return;
}

void readFileAndOutput(string filename) {
	std::ifstream file(filename); // 创建文件输入流对象

	if (file.is_open()) {
		std::string line;
		while (std::getline(file, line)) { // 逐行读取文件内容
			std::cout << line << std::endl; // 输出到标准输出
		}
		file.close(); // 关闭文件
	}
	else {
		std::cout << "Failed to open file: " << filename << std::endl;
	}
}

void appendToFile(string filename, string data) {
	ofstream file(filename, ios::app); // 创建文件输出流对象，并以追加模式打开文件

	if (file.is_open()) {
		file << data << endl; // 将数据写入文件
		file.close(); // 关闭文件
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