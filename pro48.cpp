#include<iostream>
#include<string.h>
using namespace std;
class Base
{
    public:
    char name[20];
    int price;
    Base(char nm[],int pr)
    {
        strcpy(name,nm);
        price=pr;
    }
    virtual void show()
    {}

};
class tape:public Base{
    public:
    int time;
    tape(char nm[],int pr1,int tim):Base(nm,pr1)
    {
        time=tim;
    }
    void show()
    {
        cout<<"tape Name="<<name<<endl;
        cout<<"Tape Price="<<price<<endl;
        cout<<"Tape Time="<<time;
    }

};
class Book:public Base
{
    public:
    int pages;
    Book(char nm[],int pr2,int page):Base(nm,pr2)
    {
        pages=page;
    }
    void show()
    {
        cout<<"Book Name="<<name<<endl;
        cout<<"Book Price"<<price<<endl;
        cout<<"Book Pages"<<pages<<endl;
    }
};
int main()
{
    char tnm[20],bnm[20];
    int tprice,bprice,page,tim;
    cout<<"Tape Name:";
    cin>>tnm;
    cout<<"tape time:";
    cin>>tim;
    cout<<"Tape price:";
    cin>>tprice;
    tape tp(tnm,tprice,tim);
    cout<<"Book name:";
    cin>>bnm;
    cout<<"Book Price:";
    cin>>bprice;
    cout<<"Book Pages:";
    cin>>page;
    Book bk(bnm,bprice,page);

    Base*bs[2];
    bs[0]=&tp;
    bs[1]=&bk;

    bs[0]->show();
    bs[1]->show();
    return 0;
}