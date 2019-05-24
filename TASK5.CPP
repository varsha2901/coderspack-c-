//Program to find the largest and smallest element in an array.
#include<iostream>
using namespace std;
int main()
{
   int a[10], n, i, large, small;
   cout<<"Enter the size of the array\n";
   cin>>n;
   cout<<"Enter the array elements\n";
   for(i=0; i<n; i++)
    cin>>a[i];
    large=a[0];
    small=a[0];
    for(i=0; i<n; i++)
    {
      if(a[i]>large)
        large=a[i];
       if(a[i]<small)
         small=a[i];
      }
    cout<<"Largest element in an array\n"<<large;
    cout<<"\nSmallest element in an array\n"<<small;
    return 0;
}  

 