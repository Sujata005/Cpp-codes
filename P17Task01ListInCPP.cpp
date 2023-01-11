#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int> l={5,2,10,4,5};
    for(auto it=begin(l);it!=end(l);it++){
        cout<<*it<<endl;
    }
    cout<<"Size of list is:"<<l.size()<<endl;
    l.sort();
    cout<<"sorted list:"<<endl;
     for(auto it=begin(l);it!=end(l);it++){
        cout<<*it<<endl;
    }
    l.reverse();
    cout<<"Reversed list:"<<endl;
    for(auto it=begin(l);it!=end(l);it++){
        cout<<*it<<endl;
    }
}
