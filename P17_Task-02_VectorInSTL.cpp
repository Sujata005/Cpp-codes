/*
    Vectors are same as dynamic arrays with the ability to resize itself automatically when an
    element is inserted or deleted
    
    vector<int> a;
    vector<int>b=a;
        This cannot be done with array
    In vectors, data is inserted at the end:
        begin()-Returns an iterator pointing to the first element in the vector
        end()-Returns an iterator pointing to the thoretical element that 
        
*/
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> g1;
    for(int i=1;i<=5;i++){
        g1.push_back(i);
    }
    cout<<"Output of begin and end: ";
    for(auto i=g1.begin(); i!=g1.end(); ++i){
        
    }
}