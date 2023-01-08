#include<iostream>
using namespace std;
class parent
{
    protected:
     int a;
     public:
      parent()
      {
         a=10;
      }
      void fun()
      {
        cout<<"Defined in parent"<<endl;
      }

};
class child:public parent
{
    public:
      void display()
      {
        cout<<"Parent class member:"<<a<<endl;
      }


};
int main()
{
    child obj;
    obj.display();
    // obj.fun();// give error when (class child:protected parent)
    obj.fun();
}