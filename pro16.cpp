#include <iostream>
using namespace std;

class A {
public:
    A() { cout << "Constructor of A"<<endl; }
    ~A() { cout << "Destructor of A"<<endl; }
};

class B {
public:
    B() { cout << "Constructor of B"<<endl; }
    ~B() { cout << "Destructor of B"<<endl; }
};

int main() {
    A a;
    B b;
    cout << "Inside main"<<endl;
    return 0;
}
