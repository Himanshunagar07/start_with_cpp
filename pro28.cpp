#include <iostream>
#include <iomanip>  // Required for formatting manipulators
using namespace std;

int main() {
    double value = 123.456789;

    cout << "Default format: " << value << endl;

    // Fixed-point notation
    cout << fixed;
    cout << "Fixed format: " << value << endl;

    // Scientific notation
    cout << scientific;
    cout << "Scientific format: " << value << endl;

    // Set precision to 2 digits after decimal
    cout << fixed << setprecision(2);
    cout << "Fixed with precision 2: " << value << endl;

    // Show positive sign
    cout << showpos;
    cout << "With showpos: " << value << endl;

    // Reset flags
    cout.unsetf(ios::scientific | ios::fixed);
    cout << noshowpos;

    return 0;
}