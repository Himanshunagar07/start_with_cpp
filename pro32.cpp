#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    virtual void speak() {
        cout << "Animal makes a sound." << endl;
    }
};

// Derived class from Animal
class Mammal : public Animal {
public:
    void speak() override {
        cout << "Mammal makes a different sound." << endl;
    }
};

// Derived class from Mammal (multilevel inheritance)
class Dog : public Mammal {
public:
    void speak() override {
        cout << "Dog barks." << endl;
    }
};

int main() {
    Animal* animalPtr;
    Dog myDog;

    // Pointer of base class pointing to derived object
    animalPtr = &myDog;

    // Runtime polymorphism: Dog's speak() will be called
    animalPtr->speak();

    return 0;
}
