#include <iostream>
using namespace std;

class Demo {
public:
    virtual void m1() = 0; // Pure virtual function
};

class DD : public Demo {
public:
    void m1() override {
        cout << "M1 Working" << endl;
    }
};

int main() {
    DD d2;
    d2.m1();
    return 0;
}