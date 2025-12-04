#include <iostream>
using namespace std;

class Outer {
    int x = 10;
public:
    class Inner {
    public:
        void display() {
            cout << "Inside Nested Inner Class" << endl;
        }
    };
    void show() {
        Inner in;
        in.display();
    }
};

int main() {
    Outer::Inner obj;
    obj.display();
    return 0;
}