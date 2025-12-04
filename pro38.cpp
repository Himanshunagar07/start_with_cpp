#include <iostream>
#include <bitset>
using namespace std;

int main() {
    // Declare a bitset of size 8
    bitset<8> b1(string("10101010"));  // Initialize from string
    bitset<8> b2(15);                  // Initialize from integer (00001111)

    // Display bitsets
    cout << "b1: " << b1 << endl;
    cout << "b2: " << b2 << endl;

    // Bitwise operations
    cout << "b1 & b2: " << (b1 & b2) << endl;
    cout << "b1 | b2: " << (b1 | b2) << endl;
    cout << "b1 ^ b2: " << (b1 ^ b2) << endl;
    cout << "~b1: " << (~b1) << endl;

    // Access individual bits
    cout << "b1[0] = " << b1[0] << endl; // Least significant bit
    cout << "b1[7] = " << b1[7] << endl; // Most significant bit

    // Count number of set bits
    cout << "Number of 1s in b1: " << b1.count() << endl;

    // Check if any, none, or all bits are set
    cout << "Any set in b1? " << (b1.any() ? "Yes" : "No") << endl;
    cout << "All set in b1? " << (b1.all() ? "Yes" : "No") << endl;
    cout << "None set in b1? " << (b1.none() ? "Yes" : "No") << endl;

    return 0;
}