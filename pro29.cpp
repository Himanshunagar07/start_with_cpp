#include <iostream>
#include <iomanip>  // Required for formatting flags
using namespace std;

int main() {
    int number = 255;

    cout << "Default (decimal) format: " << number << endl;

    // Octal format
    cout << oct;
    cout << "Octal format: " << number << endl;

    // Hexadecimal format
    cout << hex;
    cout << "Hexadecimal format: " << number << endl;

    // Show base (0 for octal, 0x for hex)
    cout << showbase;
    cout << "Hex with showbase: " << number << endl;

    // Show positive sign
    cout << showpos;
    cout << "Hex with showbase and showpos: " << number << endl;

    // Reset to decimal and no flags
    cout << dec << noshowbase << noshowpos;
    cout << "Back to decimal: " << number << endl;

    return 0;
}