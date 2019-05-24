//Program to swap two numbers using function.
#include<iostream>
using namespace std;
void swap( int &a, int  &b)
{
    int temp=0;
    temp= a;
     a= b;
     b=temp;
 }

 int main()
{
   int m,n;
   cout<<"Enter the first number\n";
   cin>>m;
   cout<<"Enter the second number\n";
    cin>>n;
   cout<<"numbers before swapping "<<  m<<" and  "<<n;
   swap(m,n);
   cout<<"\nnumbers after swapping "<<  m<<" and  "<<n;
   return 0;
}  
