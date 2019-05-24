//Program to convert specified days into years, weeks and days. 
#include<iostream>
using namespace std;
int main()
{
   int y, d, w ;
   cout<<"Enter the number of days:";
   cin>>d;
   y=d/365;
   w=d/7;
   d=d%365;
   d=d%7;
   cout<<"\n Years:  "<<y<<"\nWeeks:  "<<w <<"\nDays:  "<<d;
   return 0;
}