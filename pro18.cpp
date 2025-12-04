#include <iostream>
using namespace std;

enum Day { MON, TUE, WED, THU, FRI, SAT, SUN };

int main() {
    Day today = WED;

    if (today == WED) {
        cout << "It's Wednesday!" << endl;
    }
    return 0;
}