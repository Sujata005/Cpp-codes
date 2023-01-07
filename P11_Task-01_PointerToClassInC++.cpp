#include<iostream>
using namespace std;
class ABC
{
    public:
    int rollno=45;
    string name="Rahul Karki";
    void display()
    {
        cout<<"Accessed by a pointer"<<endl;
    }
}; 
int main()
{   int *p;
 p =new int[3];
    // p->display();
    // cout<<p->name<<" "<<p->rollno<<endl;
}