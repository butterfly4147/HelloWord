#include <iostream>
#include <string>

int main() {
    std::string str = "Hello, World!";
    std::string subStr = str.substr(7, 5); // 从位置7开始提取长度为5的子字符串

    std::cout << "原始字符串: " << str << std::endl;
    std::cout << "提取的子字符串: " << subStr << std::endl;

    return 0;
}