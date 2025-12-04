#include <iostream>
using namespace std;

class Date {
    int day, month, year;
public:
    void setDate(int d, int m, int y) {
        day = d; month = m; year = y;
    }
    void showDate() {
        cout << "Date: " << day << "/" << month << "/" << year << endl;
    }
};

int main() {
    Date d;
    d.setDate(23, 5, 2025);
    d.showDate();
    return 0;
}