#include<iostream>
#include <fstream>
#include<string.h>
using namespace std;
int main(){
    ofstream file;
    string data;
    file.open("hello.txt");
    file<<"Graphic Era Hill University";
    file.close();
    ifstream file2;
    file2.open("hello.txt");
    getline(file2,data);
    cout<<data;
    file2.close();
}
