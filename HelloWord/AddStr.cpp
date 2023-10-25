#include <iostream>
#include <string>

int main() {
    std::string str = "Hello";
    std::string appendString = " World!";
    str = str + appendString; // 使用字符串拼接操作符+

    std::cout << "拼接后的字符串: " << str << std::endl;

    return 0;
}