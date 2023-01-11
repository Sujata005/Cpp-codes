#include<iostream>
using namespace std;
 
double division(int a,int b)
{
    try{
        if(b==0)
        {
            throw "Division by zero condition!";
        }
    }
    catch(const char *msg)
    {
        throw;
    }
    return (a/b);
}
 
int main()
{
    
    // int x=50;
    // int y;
    // int z;

    // cout<<"Enter value of denominator ";
    // cin>>y;
    
    // try
    // {
    //     if(y==0)
    //     {
    //         throw runtime_error("Math Error: Attempted to divide by zero\n");
    //     }
    // }
    // catch(runtime_error e)
    // {
    //     cout<<"Exception Occured"<<endl<<e.what();
    //     cout<<"Enter value of denominator ";
    //     cin>>y;
    //     z=x/y;
    // }
    // cout<<"Z : "<<z<<endl;

    cout<<"Division error using function: "<<endl;
    int a=10,b=0;
    double c;

    try{
        c=division(a,b);
        cout<<c<<endl;
    }
    catch(const char *msg)
    {
        cerr<<msg<<endl;
    }
    return 0;
}