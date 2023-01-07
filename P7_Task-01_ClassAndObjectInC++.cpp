#include<iostream>
using namespace std;
class student
{
    private:
    int rollno;
    long long phoneno;
    string name;
    string address;
    public:
    student(int rn,string nam,long long pno,string add)
    {
        rollno=rn;
        name=nam;
        phoneno=pno;
        address=add;
    }
    void getdetail()
    {
        cout<<"Name="<<name<<endl;
        cout<<"Phonenumber="<<phoneno<<endl;
        cout<<"Roll no="<<rollno<<endl;
        cout<<"Address="<<address<<endl;
    }
};
int main()
{
   student obj1(1,"Sam",7376551464,"America");
   student obj2(2,"John",7900655894,"New Zealand");
   obj1.getdetail();
   obj2.getdetail();
}