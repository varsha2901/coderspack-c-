//Program to convert a string to lowercase.
#include <iostream>

#include <string.h>

using namespace std;



int main() 

{
   
    char str[100];

    
    cout<<"Enter string: ";
 
    cin.getline(str, 100);
    
 
    for(int i=0;str[i]!='\0';i++)

    {
       
       str[i] = (str[i] >= 'A' && str[i] <= 'Z') ? (str[i] + 32) : str[i];
  
    }

    
       cout<<"Lowercase string: " << str << endl;
    return 0;

}
