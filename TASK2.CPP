//Program to check if the given number is even or odd.
#include<iostream>
using namespace std;
int main()
{
  int n, rem; //n-number, rem-reminder
  cout<<"enter the number:\n";
  cin>>n;
  rem=n%2;
   if(rem == 0)
  {
     cout<<n<<" is an even number";
   }
   else
   {
      cout<<n<<" is a odd number";
    }
  return 0;
}