//Program to calculaye sum of all the elements of an array.
#include<iostream>
using namespace std;
int main()
{
   int a[20],n,i,sum=0; //a[20]-array of size 20
   cout<<"enter the size of the array\n";
   cin>>n;
   cout<<"enter the array elements \n";
   for (i=0 ; i<n ; i++)
   cin>>a[i];
    i=0;
   while(i<n)
   {
     sum=sum+a[i];
      i++;
    }
   cout<<"Sum of array elements:"<<sum;
  return 0;
}
   
 