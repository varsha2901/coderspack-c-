//Program to sort elements of array in ascending order.
#include<iostream>
using namespace std;
int main()
{
   int a[20], n, i, j, temp=0 ;
   cout<<"Enter the size of the array\n";
   cin>>n;
   cout<<"Enter the array elements\n";
   for(i=0; i<n; i++)
    cin>>a[i];
    for(i=0;  i<n ; i++)
    {
      for (j=i+1; j<n ;j++)
     {
      if(a[j]<a[i])
       {
          temp=a[i];
          a[i]=a[j];
          a[j]=temp;
        }
       }
      }
    cout<<"Array elements sorted in ascending order:\n "<<endl;
    for(i=0; i<n; i++)
   {
       cout<<a[i]<<endl;
    }
   return 0;
}  

 