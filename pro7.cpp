#include <iostream>
using namespace std;

class Shape {
public:
    virtual void area() = 0; 
};

class Circle : public Shape {
public:
    void area() {
        cout << "Area of Circle = πr²" << endl;
    }
};

int main() {
    Circle c;
    c.area();
    return 0;
}

