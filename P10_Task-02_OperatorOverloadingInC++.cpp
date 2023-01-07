#include <iostream>
using namespace std;
class sample
{
private:
    int num1;
    int num2;

public:
    sample(int num1, int num2)
    {
        this->num1 = num1;
        this->num2 = num2;
    }
    friend void operator++(sample&,int);

    void display()
    {
        cout << "num1:" << num1 << endl
             << "num2:" << num2 << endl;
    }
};
void operator++(sample &a,int)
{
    a.num1++;
    a.num2++;
}

int main()
{
    sample obj(10, 89);
    obj++;
    obj.display();
}