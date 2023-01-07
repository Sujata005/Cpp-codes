#include<iostream>
using namespace std;
class shape
{
    private:
    int length;
    int breadth;
    int side;
    public:
      shape(int l,int b)
      {
        length=l;
        breadth=b;
      }
      shape(int s)
      {
        side=s;
      }
      int area(int l,int b)
      {
        return length*breadth;
      }
      int area(int s)
      {
        return side*side;
      }
};
int main()
{
    shape obj1(4,5),obj2(8);
    cout<<"Area Of Rectangle:"<<obj1.area(4,5)<<endl;
    cout<<"Area of Square:"<<obj2.area(8)<<endl;

}