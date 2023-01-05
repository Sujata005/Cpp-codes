#include <iostream>
#include <string.h>
using namespace std;
void pointerAndValue()
{
    int a = 5;
    int *ptr = &a;
    cout<<"The address of a is"<<ptr<<"\nand the value inside it is "<<*ptr<< endl;
}
void pointerAndArrayIncrement()
{
    int a[2] = {45, 110};
    int *ptr = a;
    cout << "Pointer before increment: " << ptr << endl;
    cout << "Value before increment: " << *ptr << endl;
    ptr++;
    cout << "Pointer after increment: " << ptr << endl;
    cout << "Value after increment: " << *ptr << endl;
}
void arrayTraversingUsingPointer()
{
    int a[5] = {11,42,63,24,15};
    int *ptr = a;
    for (int i = 0; i < 5; i++)
    {
        cout<<*(ptr + i)<<" ";
    }
    cout<<endl;
}
void arrayOfIntPointer()
{
    int a[5] = {11, 42, 63, 24, 15};
    int *p[5];
    for (int i = 0; i < 5; i++)
    {
        p[i] = &a[i];
    }
    cout << "Printing addresses pointed by pointer" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "address of " << *p[i] << " is :" << p[i] << endl;
    }
}
void pointerToPointer()
{
    int a = 10;
    int *p1 = &a;
    int **p2 = &p1;
    cout << "Value of a: " << *p1 << endl;
    cout << "Value of p1: " << p1 << endl;
    cout << "Value of a: " << **p2 << endl;
    cout << "Value of p2: " << p2 << endl;
    cout << "Value of address pointed by p2: " << *p2 << endl;
}
int main()
{   cout<<"Pointer and value:"<<endl;
    pointerAndValue();
    cout<<"Pointer with array:"<<endl;
    pointerAndArrayIncrement();
    cout<<"Array traversing:"<<endl;
    arrayTraversingUsingPointer();
    cout<<"Array of int pointer:"<<endl;
    arrayOfIntPointer();
    cout<<"Pointer to pointer"<<endl;
    pointerToPointer();
    return 0;
}
