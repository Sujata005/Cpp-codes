#include<iostream>
using namespace std;
class base
{
    public:
    virtual ~base()
    {
        cout<<"Destructor of base class"<<endl;
    }

};
class child:public base{
    public:
    ~child()
    {
        cout<<"Destructor of child class"<<endl;
    }
};
int main()
{
//    child b3;
//    child *p=new child();
//    delete p;
   //we have to delete explicitly as we have made it dynamically
   //normal printing will happen
   base *q=new child();
   delete q;
   //only base class destructor will be called
   //to solve this we use virtual keyword

}