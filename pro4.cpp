#include <iostream>
int main() {
    int* ptr = new int;
    *ptr = 100;

    std::cout << "Value: " << *ptr << std::endl;

    delete ptr;
    return 0;
}
