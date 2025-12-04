#include <iostream>
using namespace std;
namespace First {
    void display() {
        std::cout << "Inside first Namespace\n";
    }
}
namespace Second {
    void display() {
        std::cout << "Inside second namespace\n";
    }
}
int main() {
    First::display();
    Second::display();
    return 0;
}