#include <iostream>
#include <cstring>
using namespace std;

class Person {
private:
    char* name;

public:
    // Constructor
    Person(const char* n = "") {
        name = new char[strlen(n) + 1];
        strcpy(name, n);
    }

    // Copy Constructor
    Person(const Person& p) {
        name = new char[strlen(p.name) + 1];
        strcpy(name, p.name);
    }

    // Overload assignment operator
    Person& operator=(const Person& p) {
        if (this != &p) { // Avoid self-assignment
            delete[] name; // Free old memory
            name = new char[strlen(p.name) + 1];
            strcpy(name, p.name);
        }
        return *this;
    }

    // Display function
    void display() const {
        cout << "Name: " << name << endl;
    }

    // Destructor
    ~Person() {
        delete[] name;
    }
};

int main() {
    Person person1("Alice");
    Person person2("Bob");

    cout << "Before assignment:" << endl;
    person1.display();
    person2.display();

    person2 = person1;  // Using overloaded assignment operator

    cout << "\nAfter assignment (person2 = person1):" << endl;
    person1.display();
    person2.display();

    return 0;
}