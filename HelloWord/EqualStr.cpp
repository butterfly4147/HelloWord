#include <iostream>
#include <string>

int main() {
    std::string str = "Hello, World!";
    std::string subStr1 = str.substr(0, 5); // ��ȡǰ5���ַ���Ϊ���ַ���
    std::string subStr2 = str.substr(7, 5); // ��ȡ��7����11���ַ���Ϊ���ַ���

    if (subStr1 == subStr2) {
        std::cout << "���ַ������" << std::endl;
    }
    else {
        std::cout << "���ַ��������" << std::endl;
    }

    return 0;
}