#include <iostream>
using namespace std;

// Base class 1
class Engine {
public:
    void startEngine() {
        cout << "Engine started." << endl;
    }
};

// Base class 2
class Wheels {
public:
    void rotateWheels() {
        cout << "Wheels are rotating." << endl;
    }
};

// Derived class inheriting from both Engine and Wheels
class Car : public Engine, public Wheels {
public:
    void drive() {
        cout << "Car is driving." << endl;
    }
};

int main() {
    Car myCar;

    myCar.startEngine();   // From Engine
    myCar.rotateWheels();  // From Wheels
    myCar.drive();         // Own method

    return 0;
}