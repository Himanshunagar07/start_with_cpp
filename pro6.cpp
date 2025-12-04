#include <iostream>
#include <iomanip>

int main() {
    char ch;
    std::cout << "Enter some text (including spaces): ";
    std::cin >> std::noskipws;

    while (std::cin >> ch) {
        std::cout << ch;
    }

    return 0;
}