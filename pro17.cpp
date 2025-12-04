#include <iostream>
using namespace std;

class Sample {
    int x;
public:
    Sample(int val) {
        x = val;
    }

    // Copy constructor
    Sample(const Sample &s) {
        x = s.x;
        cout << "Copy constructor called"<<endl;
    }

    void display() {
        cout << "Value: " << x << endl;
    }
};

int main() {
    Sample obj1(10);
    Sample obj2 = obj1;  

    obj2.display();
    return 0;
}