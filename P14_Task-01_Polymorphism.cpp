// 1- Add two add methods (int,int) and (int, float) 
// 2- Add one more add method in child class (int, float)
//  Perform following tasks: 
// 1. Try calling overloaded method from base and child class object.
// 2. Try calling overriding method from child class object.
// 3. Find methods which can not not seen by the child class object 
#include<iostream>
using namespace std;
class base
{
    public:
    int add(int a,int b)
    {
        return a+b;
    }
    double add(int a,double b)
    {
        return a+b;
    }
};
class child:public base{
    public:
    using base::add;
    //Data hiding
    //child object can't call base class object when same name is used.
    double add(int a,double b)
    {
        return a+b+6.9;
    }
};
int main()
{
    base c;
    cout<<c.add(5,7.8)<<endl;
    child b;
    cout<<"add1: "<<b.add(2,4)<<endl;
    cout<<"add2: "<<b.add(3,7.8)<<endl;
}