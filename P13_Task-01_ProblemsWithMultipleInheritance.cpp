#include<iostream>
using namespace std;
class A
{
    public:
    void display()
    {
        cout<<"Display of A";
    }
};
class B
{
    public:
    void display()
    {
        cout<<"Display of B";
    }
};
class C:public A,public B
{
  public:
  void display()
  {
    cout<<"Display of c";
  }
};
int main()
{
    C obj;
    obj.A::display(); // we need to add scope resolution operator to remove the 
    //ambiguty as same function is written in both inherited class
    cout<<endl;
    obj.B::display();
    cout<<endl;
    obj.C::display();
}