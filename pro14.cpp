#include <iostream>
using namespace std;

class Sample {
    int x;
    mutable int accessCount;
public:
    Sample(int val) : x(val), accessCount(0) {}

    int getValue() const {
        accessCount++;
        return x;
    }

    void showCount() const {
        cout << "Accessed " << accessCount << " times" << endl;
    }
};

int main() {
    Sample s(10);
    cout << s.getValue() << endl;
    cout << s.getValue() << endl;
    s.showCount();
    return 0;
}