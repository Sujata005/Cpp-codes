#include<iostream>
using namespace std;
//Doubt
class base
{
    public:
    //virtual function is used to achieve run time polymorphism
    virtual void display()
    {
        cout<<"Display of base class"<<endl;
    }
    //function overloading is compile time polymorphism
     void display(int b)
     {
        cout<<"Display of base class:"<<b<<endl;
     }

};
class child:public base
{
    public:
    //function overriding is runtime polymorphism
    void display()
    {
        cout<<"Display of chlid class"<<endl;
    }

};
int main()
{
    base *p;
    child x;
    p=&x;
    p->display(2);
    p->display();
}