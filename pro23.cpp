#include <iostream>
using namespace std;

class Vector2D {
private:
    float x, y;

public:
    // Constructor
    Vector2D(float a = 0, float b = 0) {
        x = a;
        y = b;
    }

    // Overload the - operator
    Vector2D operator-(const Vector2D& v) {
        return Vector2D(x - v.x, y - v.y);
    }

    // Display the vector
    void display() const {
        cout << "(" << x << ", " << y << ")" << endl;
    }
};

int main() {
    Vector2D v1(10.5, 5.5);
    Vector2D v2(3.2, 2.1);

    Vector2D result = v1 - v2;  // Using overloaded - operator

    cout << "Vector 1: ";
    v1.display();

    cout << "Vector 2: ";
    v2.display();

    cout << "Result (v1 - v2): ";
    result.display();

    return 0;
}