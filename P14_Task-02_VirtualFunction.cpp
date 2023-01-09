// Consider above scenario and perform given tasks: 
// 1- Try to call base class add (int, float) method from child class reference/pointer
// 2- Try to call base class add (int, float) method from base class reference/pointer 
#include<iostream>
using namespace std;
class base
{
    public:
    virtual double add(int a,double b)
    {
        return a+b;
    }
};
class child:public base{
    public:
    
    double add(int a,double b)
    {
        return a+b+7.9;
    }
};
int main()
{
  base *p;
  child d;
  p=&d;
  cout<<p->add(3,7.8)<<endl;
 
}