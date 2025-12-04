#include <iostream>
using namespace std;

// Base class
class Person {
protected:
    string name;  // Protected member

public:
    void setName(string n) {
        name = n;
    }
};

// Derived class
class Student : public Person {
private:
    int rollNumber;

public:
    void setRollNumber(int r) {
        rollNumber = r;
    }

    void display() {
        // Accessing protected member from base class
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
    }
};

int main() {
    Student s;

    s.setName("Alice");      // Public method of base class
    s.setRollNumber(101);    // Public method of derived class

    s.display();             // Displaying inherited and own data

    return 0;
}