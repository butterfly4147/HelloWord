#include <iostream>
#include <string>

int main() {
    std::string str = "Hello";
    std::string appendString = " World!";
    str.append(appendString); // ʹ��append()����

    std::cout << "ƴ�Ӻ���ַ���: " << str << std::endl;

    return 0;
}