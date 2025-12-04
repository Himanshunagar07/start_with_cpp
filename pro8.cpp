#include <iostream>
using namespace std;

// Abstract Class: Contains at least one pure virtual function
class AbstractShape {
public:
    virtual void draw() = 0;  // Pure virtual function
};

class Circle : public AbstractShape {
public:
    void draw() override {
        cout << "Drawing a Circle (Concrete Class)" << endl;
    }
};

class Square : public AbstractShape {
public:
    void draw() override {
        cout << "Drawing a Square (Concrete Class)" << endl;
    }
};

int main() {

    Circle c;     
    Square s;     
    AbstractShape* shape;

    shape = &c;
    shape->draw();  // Calls Circle's draw()

    shape = &s;
    shape->draw();  // Calls Square's draw()

    return 0;
}