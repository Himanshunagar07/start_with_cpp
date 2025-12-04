#include <iostream>
using namespace std;
class Sample {
public:
    int a;
protected:
    int b;
private:
    int c;
public:
    void setValues() {
        a = 10;
        b = 20;
        c = 30;
    }
    void showValues() {
        std::cout << "a= " << a << endl;
        std::cout << "b= "<<b<<endl;
        std::cout<<"c= "<<c<<endl;
    }
};
int main() {
    Sample obj;
    obj.setValues();
    obj.showValues();
    return 0;
}