#include <iostream>
#include <string>

int main() {
    std::string str = "Hello, WorldWorld!";
    std::string searchStr = "World";

    size_t found = str.find(searchStr); // ��str������searchStr

    if (found != std::string::npos) {
        std::cout << "�ҵ��Ӵ�λ��: " << found << std::endl;
    }
    else {
        std::cout << "δ�ҵ��Ӵ�" << std::endl;
    }

    return 0;
}