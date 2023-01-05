//WAP in C++ to delete an Element from the array
#include<iostream>
using namespace std;
void delete1()
{
    int arr[8]={1,2,3,4,5,6,7,8};
    int k=4;
   // {1,2,3,5,6,7,8,8}
   int i=0,j=-1;
   for(i=0;i<8;i++)
   { 
    if(arr[i]==k)
    {
        j=i;
    }
    if(j!=-1)
    {
        arr[j]=arr[j+1];
        j++;
    }
   }
   for(i=0;i<7;i++)
   {
    cout<<arr[i]<<" ";
   }
   cout<<endl;
}
void reversedMatrix()
{
    int i,j,c=9;
    int arr[3][3];
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            arr[i][j]=c--;
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

}
int multiplyTwoMatrices1()
{
   int r1,r2,c1,c2,i;
   cout<<"Enter r1&c1:";
   cin>>r1;
   cin>>c1;
   cout<<"Enter r2&c2:";
   cin>>r2;
   cin>>c2;
   
   if(c1!=r2)
   {
    cout<<"Not possible"<<endl;
    return 0;
   }
    else{
        int a[r1][c1],b[r2][c2];
        int i,k,j,s;
        cout<<"Enter the array1:"<<endl;
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                cin>>a[i][j];
            }
        }
        cout<<"Enter the array2:"<<endl;
        for(i=0;i<r2;i++)
        {
            for(j=0;j<c2;j++)
            {
                cin>>b[i][j];
            }
        }
    cout<<"Resultant Matrix"<<endl;
    for(i=0;i<r1;i++)
    { 
        for(j=0;j<c2;j++)
        {  s=0;
            for(k=0;k<r2;k++)
            {
                s+=a[i][k]*b[k][j];
            }
            cout<<s<<" ";
        }
        cout<<"\n";
    } 
    }
   return 1; 
}
//write a c++ program to find the maximum sum so that no two elements are adjacent
void maxsum()
{
  int m,i,j,s=0;
  cout<<"Enter size:";
  cin>>m;
  int a[m];
  cout<<"Enter the array:";
  for(i=0;i<m;i++)
  {
    cin>>a[i];
  }
  for(i=0;i<m;i++)
  {
    for(j=i+2;j<m;j++)
    {
        if(s<a[i]+a[j])
        {
          s=a[i]+a[j];
        }
    }
  }
  cout<<"Sum="<<s<<endl;
}
//program to find two elements whose sum is closest to zero
void minsum()
{
  int m,i,j,s=INT8_MAX;
  cout<<"Enter size:";
  cin>>m;
  int a[m];
  cout<<"Enter the array:";
  for(i=0;i<m;i++)
  {
    cin>>a[i];
  }
  for(i=0;i<m;i++)
  {
    for(j=i+2;j<m;j++)
    {
        if(s>a[i]+a[j])
        {
          s=a[i]+a[j];
        }
    }
  }
  cout<<"Sum="<<s<<endl;
}
//to find the duplicate in an array
void duplicate()
{
  int m,i,j,c;
  printf("Enter the size:");
  scanf("%d",&m);
  int a[m];
  cout<<"Enter the array:";
  for(i=0;i<m;i++)
  {
    cin>>a[i];
  }
  cout<<"Duplicate elements:";
  for(i=0;i<m;i++)
  {  c=0;
     for(j=i+1;j<m;j++)
     {
        if(a[i]==a[j])
        {
          c++;
        }
     }
     if(c>0)
     {
      cout<<a[i]<<" ";
     }
  }
  cout<<endl;
}
//write a program of c++ median of two sorted array
void MedianTwoArray()
{
int n,i,m;
  cout<<"Enter size of array1:";
  cin>>n;
  int a[n];
  cout<<"Enter array1:";
  for(i=0;i<n;i++)
        cin>>a[i];
  cout<<"Enter size of array2:";
  cin>>m;
  int b[m];
  cout<<"Enter array2:";
  for(i=0;i<m;i++)
        cin>>b[i];
  int c[n+m],p=0,q=0;
  for(i=0;i<m+n;i++)
  {
     if(a[p]>b[q])
     {
        c[i]=b[q];
        q++;
     }
     else{
      c[i]=a[p];
      p++;
     }
  }
  cout<<"Median is:";
   if((m+n)%2==0)
   {  float avg=(float)(c[(m+n)/2]+c[(m+n-1)/2])/2;
      cout<<avg;
   }
   else
   {
     cout<<c[(m+n)/2];
   }
}
//0 1 2 3 4 5 6 7 8 
//write a c++ program to rolate a array(left rotation).
void leftrotation()
{
  int n,i,k;
  cout<<"Enter size:";
  cin>>n;
  int a[n];
  cout<<"Enter the array:";
  for(i=0;i<n;i++)
        cin>>a[i];
  k=a[0];
  for(i=0;i+1<n;i++)
  {
     a[i]=a[i+1];
  }
  a[n-1]=k;
  cout<<"Resutant array:";
  for(i=0;i<n;i++)
  {
    cout<<a[i]<<" ";
  }
   cout<<endl;
}
//write the program to display the majority element.
void MajorityElement()
{
    int m,i,j,max=INT8_MIN,f=0,e=0;
    cout<<"Enter size:";
    cin>>m;
    int a[m];
    cout<<"Enter the array:";
    for(i=0;i<m;i++)
    {
        cin>>a[i];
        if(a[i]>max)
           max=a[i];
    }
   int count[max+1];
   for(i=0;i<=max;i++)
   { 
       count[i]=0;
   }
   for(i=0;i<m;i++)
   {
        count[a[i]]++;
   }
   for(i=0;i<=max;i++)
   {
       if(count[i]>=f)
       {
          f=count[i];
          e=i;
       }
   }
   cout<<"Majority element is "<<e<<" Coming "<<f<<" times"<<endl;
}
//Write a c++ program to find those pair whose sum is equal to x.Input(array,x)
    //O(n)-time complexity
    //O(n)-space complecity
void PairingusingCountSort()
{
    int m,i,j,x,max=INT8_MIN;
    cout<<"Enter size:";
    cin>>m;
    int a[m];
    cout<<"Enter the array:";
    for(i=0;i<m;i++)
    {
        cin>>a[i];
        if(a[i]>max)
           max=a[i];
    }
   int count[max+1];
   for(i=0;i<=max;i++)
   { 
       count[i]=0;
   }
   for(i=0;i<m;i++)
   {
        count[a[i]]++;
   }
   cout<<"Enter sum of pair:";
   cin>>x;
   for(i=1;i<=max;i++)
   {
     if(count[i]>0&&count[x-i]>0)
     {
       cout<<i<<","<<x-i<<endl;
       count[x-i]--;
       count[i]--;
     }
   }
}
int main()
{
  cout<<"Delete function called"<<endl;
   delete1();
   cout<<"Reversing a matrix:"<<endl;
   reversedMatrix();
   cout<<"Martrix mutiplication"<<endl;
   multiplyTwoMatrices1();
   cout<<"Pairing using sort"<<endl;
  PairingusingCountSort();
  cout<<"Majority Element"<<endl;
  MajorityElement();
  cout<<"Left Rotation"<<endl;
  leftrotation();
  cout<<"Maximum Sum"<<endl;
  maxsum();
  cout<<"Minimum Sum"<<endl;
  minsum();
  cout<<"Duplicate"<<endl;
  duplicate();
  cout<<"median of two array"<<endl;
  MedianTwoArray();
}
