#include <iostream>
#include <string>

int main() {
    std::string str = "Hello, World!";
    std::string subStr1 = str.substr(0, 5); // 提取前5个字符作为子字符串
    std::string subStr2 = str.substr(7, 5); // 提取第7到第11个字符作为子字符串

    if (subStr1 == subStr2) {
        std::cout << "子字符串相等" << std::endl;
    }
    else {
        std::cout << "子字符串不相等" << std::endl;
    }

    return 0;
}