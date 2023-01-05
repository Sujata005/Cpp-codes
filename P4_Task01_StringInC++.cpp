#include<iostream>
using namespace std;
#include<string>
//TASK-01 String and int addition
int IntStringAdd()
{
    string str;
    int a=1;
  //string s2=str+a;//it will give an error as no such operator is defineed 
 }                    
//TASK-02 Palindrome 
 int palindrome()
 {
  string name;
   cout<<"Enter the string:";
   cin>>name;
   int j=name.size()-1;
   for(int i=0;i<name.size()/2;i++,j--)
   {
      if(name[i]!=name[j])
      {
        cout<<"Not Palindrome"<<endl;
        return 0;
      }
   }
   cout<<"Palindrome"<<endl;
   return 1;
 }
 // TASK-03&&04 String Comparision function 
 // syntax: string1.compare(string 2)
 void CompareString()
 {
    string s1,s2;
    cout<<"Enter two strings:";
    cin>>s1>>s2;
    int x=s1.compare(s2);
    if(x>0)
      cout<<"str 1 is large"<<endl;
    else if(x<0)
      cout<<"str2 is large"<<endl;
    else                    //x==0
      cout<<"str1 is equal to str2"<<endl;

 }
 //TASK-05 String are not mutable(can be changed in its owm memory address) in c++.
 void stringmutableOrNot()
 {
   string a="Hello";
   cout<<&a<<endl;
   a[0]='j';
   cout<<&a<<endl;
  cout<<a<<endl;
 }
 //TASK-06 part-1
 void ReplaceCharacterSmall()
{
   string name;
   cout<<"Enter the string:";
   cin>>name;
   for(int i=0;i<name.size();i++)
   {
      if(name[i]>='a'&& name[i]<='z')
      {
        if(name[i]=='z')
            name[i]='a';
        else{
          name[i]+=1;
        }
      }
   }
   cout<<"Replace Character:"<<name<<endl;
}
//TASK-06 part-2
 void ReplaceCharacterCapital()
 {
     string name;
   cout<<"Enter the string:";
   cin>>name;
   for(int i=0;i<name.size();i++)
   {
      if(name[i]>='A'&& name[i]<='Z')
      {
        if(name[i]=='Z')
              name[i]='A';
        else{
          name[i]+=1;
        }
      }
   }
   cout<<"Replace Character:"<<name<<endl;
 }
int main()
{
  cout<<"String int addition:ERROR"<<endl;
  // IntStringAdd(); ERROR
  cout<<"Palindrome:"<<endl;
  palindrome();
  cout<<"String comparision"<<endl;
  CompareString();
  cout<<"String mutable or not"<<endl;
   stringmutableOrNot();
   cout<<"Replace Character small"<<endl;
  ReplaceCharacterSmall();
  cout<<"Replace Character capital"<<endl;
  ReplaceCharacterCapital();
}