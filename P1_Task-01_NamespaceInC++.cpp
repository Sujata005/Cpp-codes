#include<iostream>
using namespace std;
/* Variable search
local scope -> global scope -> namespace!
*/
namespace std1
{
    int x=10;
}
namespace std2
{
    int x=12;
}
int x=11;
int main()
{
    cout<<std1::x<<endl;
    cout<<std2::x<<endl;
    cout<<x<<endl;
    return 0;
}