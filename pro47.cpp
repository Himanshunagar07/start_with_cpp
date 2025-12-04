#include<iostream>
using namespace std;
class Base
{
    public:
    void m1()
    {
        cout<<"M1 working"<<endl;
    }
    virtual void m2()
    {
        cout<<"M2 working"<<endl;
    }
    virtual void m3()
    {

    }
};
class Sub:public Base{
    public:
    void m2()
    {
        cout<<"Sub m2 working"<<endl;
    }
    void m3()
    {
        cout<<"Sub m3 wo0rking"<<endl;
    }
};
int main()
{
    Base b1;
    Sub s1;
    Base*bs[2];

    bs[0]=&b1;
    bs[1]=&s1;

    bs[0]->m1();
    bs[0]->m2();
    bs[1]->m2();
    bs[1]->m3();
    return 0;
}