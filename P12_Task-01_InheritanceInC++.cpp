#include<iostream>
using namespace std;
class base
{
    private:
     int a=10;
    protected:
    int b=20;
    public:
    int c=30;
};
//In child class we can access protected as will as public funtions and variables.
class derived:protected base{
//class derived:public base
// This public defines the further access of the inherited funtions and variables.
   public:
   void display()
   {
    cout<<b<<endl;
   }
   
};
int main()
{
    derived obj;
    //obj.b; //we can't acess as class derived:protected base
    
}