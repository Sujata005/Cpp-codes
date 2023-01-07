// WAP in C++, to Perform (String + int) operation by using operator 
// overloading and friend function.
#include<iostream>
using namespace std;
string operator+(string a,int b)
{
    string c=to_string(b);// to_string convert karta hai string mai
    return a+c;
}
int main()
{
    string a;
    int b;
    a="Hello";
    b=123;
    string s=a+b;//a,b function parameter hai 
    cout<<"Final string:"<<s<<endl;
}
