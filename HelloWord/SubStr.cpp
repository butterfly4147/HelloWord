#include <iostream>
#include <string>

int main() {
    std::string str = "Hello, World!";
    std::string subStr = str.substr(7, 5); // ��λ��7��ʼ��ȡ����Ϊ5�����ַ���

    std::cout << "ԭʼ�ַ���: " << str << std::endl;
    std::cout << "��ȡ�����ַ���: " << subStr << std::endl;

    return 0;
}