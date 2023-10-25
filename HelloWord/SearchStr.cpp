#include <iostream>
#include <string>

int main() {
    std::string str = "Hello, WorldWorld!";
    std::string searchStr = "World";

    size_t found = str.find(searchStr); // 在str中搜索searchStr

    if (found != std::string::npos) {
        std::cout << "找到子串位置: " << found << std::endl;
    }
    else {
        std::cout << "未找到子串" << std::endl;
    }

    return 0;
}