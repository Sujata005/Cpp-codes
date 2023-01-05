#include<iostream>
using namespace std;
//less cohesive:Easy to make changes in code.
//inline function reducess switching overhead
inline int sum(int a,int b)
{
    return a+b;
}
//Call by value
void SwapByValue(int a,int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}
//Call by Address
void SwapByAddress(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
//Recursive function
int fact(int x)
{
    if(x==1)
      return 1;
    else
      return x*fact(x-1);
}

int main()
{
   int a,b,x;
   a=10;
   b=20;
   x=5;
   cout<<"Sum="<<sum(a,b)<<endl;
   SwapByValue(a,b);
   cout<<"Call by Value:"<<a<<" "<<b<<endl;
   SwapByAddress(&a,&b);
   cout<<"Call by Referrence:"<<a<<" "<<b<<endl;
   cout<<"Factorial of "<<x<<" is "<<fact(x)<<endl;

}