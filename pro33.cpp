#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    void eat() {
        cout << "Animal eats food." << endl;
    }
};

// Derived class from Animal
class Mammal : public Animal {
public:
    void walk() {
        cout << "Mammal walks on land." << endl;
    }
};

// Derived class from Mammal (Multilevel Inheritance)
class Dog : public Mammal {
public:
    void bark() {
        cout << "Dog barks loudly." << endl;
    }
};

int main() {
    Dog myDog;

    // Calling methods from each level of inheritance
    myDog.eat();   // From Animal
    myDog.walk();  // From Mammal
    myDog.bark();  // From Dog

    return 0;
}