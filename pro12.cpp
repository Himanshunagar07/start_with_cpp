#include <iostream>
using namespace std;

class Complex {
    float real, imag;
public:
    void getData(float r, float i) {
        real = r;
        imag = i;
    }
    Complex add(Complex c) {
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }
    void show() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1, c2, result;
    c1.getData(3.2, 4.5);
    c2.getData(1.1, 2.3);
    result = c1.add(c2);
    cout << "Sum: ";
    result.show();
    return 0;
}