#include<iostream>
using namespace std;
class point
{
    private:
    int x,y;
    public:
    point(int x1,int y1)
    {
        x=x1;
        y=y1;
    }//Copy Constructor
    point(const point &t2)
    {
        x=t2.x+10;
        y=t2.y+20;
    }
    int getx()
    {return x;}
    int gety()
    {return y;}
};
int main()
{
    point p1(10,15);//Normal Constructor is called here.
    point p2=p1;//Copy cons. is called here
    //Let us access value assingned by Constructor.
    cout<<"p1.x"<<p1.getx()<<",p1.y"<<p1.gety();
    cout<<"\np2.x"<<p2.getx()<<",p2.y"<<p2.gety();
    return 0;
}
