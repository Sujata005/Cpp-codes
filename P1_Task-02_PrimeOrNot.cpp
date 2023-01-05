#include<iostream>
#include<cmath>
using namespace std;
int allN(int n)
{
    int i;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
            {
                cout<<"not Prime Number"<<endl;
                return 0;
            }   
    }
    cout<<"prime number"<<endl;
    return 0;
}
int sqrtn(int n)
{
     int i;
    for(i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
            {
                cout<<"not Prime Number"<<endl;
                return 0;
            }   
    }
    cout<<"prime number"<<endl;
    return 1;
}
int halfn(int n)
{
     int i;
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
            {
                cout<<"not Prime Number"<<endl;
                return 0;
            }   
    }
    cout<<"prime number"<<endl;
    return 1;
}
int sqrt1(int n)
{
    int i=1,r=1;
    while(r<=n)
    {
        i++;
        r=i*i;
    }
    return (i-1);
}
int selfsqrt(int n)
{
     int i;
    for(i=2;i<=sqrt1(n);i++)
    {
        if(n%i==0)
            {
                cout<<"not Prime Number"<<endl;
                return 0;
            }   
    }
    cout<<"prime number"<<endl;
    return 1;
}
 
int main()
{
    int n;
    cout<<"Enter the number:";
    cin>>n;
     allN(n);
     sqrtn(n);
     halfn(n);
     selfsqrt(n);
    return 0;
}