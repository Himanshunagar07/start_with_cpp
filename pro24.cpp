#include <iostream>
using namespace std;

class Counter {
private:
    int value;

public:
    // Constructor
    Counter(int v = 0) {
        value = v;
    }

    // Overload pre-increment ++obj
    Counter& operator++() {
        ++value;
        return *this;
    }

    // Overload post-increment obj++
    Counter operator++(int) {
        Counter temp = *this;
        value++;
        return temp;
    }

    // Display value
    void display() const {
        cout << "Value: " << value << endl;
    }
};

int main() {
    Counter c1(5);

    cout << "Initial: ";
    c1.display();

    ++c1;  // Pre-increment
    cout << "After Pre-increment (++c1): ";
    c1.display();

    c1++;  // Post-increment
    cout << "After Post-increment (c1++): ";
    c1.display();

    return 0;
}