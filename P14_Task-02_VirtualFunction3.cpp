// 3- Fix your code in such a way so, child clsss add (int,int) will always be called 
#include<iostream>
using namespace std;
class base
{
    public:
    double add(int a,double b)
    {
        return a+b;
    }
};
class child:public base{
    public:
    using base::add;
    double add(int a,int b)
    {
        return a+b+6.9;
    }
};
int main()
{
  child b,*p;
  p=&b;
  cout<<p->add(3,7.8)<<endl;
  base d,*y;
  y=&d;
  cout<<p->add(3,4.6)<<endl;
}