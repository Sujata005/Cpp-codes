#include<iostream>
using namespace std;
class student
{
    private:
    string name;
    int age,year;
    char section;
    int marks;
    string college;
    public:
    static int total;
    void setdetail(string na,int a,int y,char s,int m,string c)
    {
        name=na;
        age=a;
        year=y;
        section=s;
        marks=m;
        college=c;
        total+=marks;
    }
    static int totalmarks()
    {
        return total;
    }
};
int student::total=0;
int main()
{
    student obj[4];
    obj[0].setdetail("Rahul",18,2,'A',93,"Graphic Era");
    obj[1].setdetail("Sharfarz",20,4,'A',78,"IIT Madras");
    obj[2].setdetail("lucky",16,0,'C',89,"BITS pilani");
    obj[3].setdetail("yogesh",19,2,'A',90,"MIT");
    cout<<"Total marks:"<<student::total<<endl;
}