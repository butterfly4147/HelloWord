#include <iostream>
#include <string>

int main() {
    std::string str = "Hello";
    std::string appendString = " World!";
    str = str + appendString; // ʹ���ַ���ƴ�Ӳ�����+

    std::cout << "ƴ�Ӻ���ַ���: " << str << std::endl;

    return 0;
}