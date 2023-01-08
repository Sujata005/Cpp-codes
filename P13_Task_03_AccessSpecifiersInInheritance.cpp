#include<iostream>
using namespace std;
//public
class A
{
    public:
    int a=10;
    void display1()
    {
        cout<<a<<endl;
    }
};
class B:public A
{
    public:
    void display2()
    {
        cout<<a<<endl;
    }
};
class Z:public B
{
    public:
    void display2()
    {
        cout<<a<<endl;
    }
};
//protected
class C:protected A
{
    public:
    void display3()
    {
        cout<<a<<endl;
    }

};
class D:protected C
{
    public:
    void display()
    {
        cout<<a<<endl;
    }
};
//private
class E:private A
{
    public:
    void display4()
    {
        cout<<a<<endl;
    }
};
class F:private E
{
    public:
    void display()
    {
        //cout<<a<<endl;//Here a is inaccessible as E inherited it as private
    }
};
int main()
{
    B obj;
    cout<<obj.a;
    C obj2;
    //cout<<obj2.a;//a is inaccessible as C inherited it as protected
    E obj3;
   // cout<<obj3.a;//a is inaccessible as C inherited it as private
    
}