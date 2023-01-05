#include<iostream>
using namespace std;
int main()
{
    int a=10,b=12,c=15;
    //Arithimatic Operator[+,*,-,/]
    cout<<a+b<<endl;

    //Remainder Operator[%]
    cout<<a%b<<endl;
    
    //Arithimatic Assignment Operator[+=,-=,*=/=]
    c+=10; //c=c+a;
    cout<<c<<endl;

    //Increment and Decrement Operator [++,--]
    cout<<a++<<endl;
    cout<<++a<<endl;

    //both expression are using decrement operator [--]
    //postfix and prefix decrement
    cout<<a--<<endl;//postfix decrement
    cout<<--a<<endl;//prefix decrement

    //Logical operator [||,&&,!]
    a=2;b=3;
    if(a>1&&b<2)
    {
        cout<<"expression 1"<<endl;
    } 
    if (a>1 || b<2)
    {
       cout<<"expression 2"<<endl;
    }
    if (a!=2)
    {
        cout<<"expression 3"<<endl;
    }

    //Conditional operater:ternary operator
    int n1=5,n2=10,max;
    max=(n1>n2)?n1:n2;
    cout<<"largest number between:"<<max<<endl;
  
    //Relational Operator [>,<,<=,>=]->{true, false}
    if (a>1)
    {
        cout<<"True"<<endl;
    }
}