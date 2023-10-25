#include <iostream>
#include <string>

int main() {
    std::string str = "Hello";
    std::string appendString = " World!";
    str.append(appendString); // 使用append()函数

    std::cout << "拼接后的字符串: " << str << std::endl;

    return 0;
}