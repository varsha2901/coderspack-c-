//Program to check if the given year is a leap year.
#include<iostream>
using namespace std;
int main()
{
   int year; 
   cout<<"enter a year\n";
   cin>>year;
    if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
    {
      cout<<"year "<<year <<"  is a leap year";
     }
     else
     { 
       cout<<"year "<<year <<"  is not a leap year";
     }
 return 0;
}