#include <iostream>
using namespace std;

class B; // Forward declaration

class A {
    int a;
public:
    A() : a(10) {}
    friend void showData(A, B);  // Friend function
};

class B {
    int b;
public:
    B() : b(20) {}
    friend void showData(A, B);
};

void showData(A objA, B objB) {
    cout << "A::a = " << objA.a << endl;
    cout<<" B::b = " << objB.b << endl;
}

int main() {
    A a;
    B b;
    showData(a, b);
    return 0;
}
