#include <iostream>
using namespace std;

class Test {
    static int count;
public:
    Test() { count++; }
    static void showCount() {
        cout << "Object Count: " << count << endl;
    }
};

int Test::count = 0;

int main() {
    Test t1, t2, t3;
    Test::showCount();
    return 0;
}