#include<iostream>
using namespace std;
class Mammels
{
    public:
    void display1()
    {
        cout<<"I am mammal"<<endl;
    }
};
class MarineAnimals
{
    public:
    void display2()
    {
        cout<<"I am a marine animal"<<endl;
    }
};
class BlueWhale:public Mammels,public MarineAnimals
{
     public:
     void display()
     {
        cout<<"I belong to both marine as well as mammels"<<endl;
     }
};
int main()
{
    Mammels mam;
    mam.display1();
    MarineAnimals mar;
    mar.display2();
    BlueWhale bw;
    bw.display();
    //if there is both same name function in both the inheriting classes
    //then this will generate ambiguity and give an error.
    bw.display1();
    bw.display2();

}