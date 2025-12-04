#include <iostream>
#include <string>  // Required for std::string
using namespace std;

int main() {
    string name;

    cout << "Enter your name: ";
    getline(cin, name);  // Reads full line including spaces

    cout << "Hello, " << name << "!" << endl;

    return 0;
}