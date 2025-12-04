#include <iostream>
using namespace std;

class Test {
    int x;
public:
    Test(int val) : x(val) {}
    void display() const {
        cout << "Value: " << x << endl;
    }
};

int main() {
    const Test t(5);
    t.display();
    return 0;
}