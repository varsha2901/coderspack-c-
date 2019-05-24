//Program to check whether two given strings are an anagram.
#include <iostream>

#include <cstring>

using namespace std;

int isAnagram(char *str1, char *str2);

 
int main()
{
 
    char str1[100], str2[100];

    cout << "Enter first String\n";

    cin.getline(str1, 100);

    cout << "Enter second String\n";
 
    cin.getline(str2, 100);
  
  
    if(isAnagram(str1, str2))
    {
     
      cout <<str1 <<" and "<<str2 << " strings are Anagram";
 
     } 
     else 
     {
        
       cout << "Both strings are not Anagram";
  
     }
     
    
     return 0;

}
  

int isAnagram(char *str1, char *str2)
{

    int a[256] = {0}, b[256] = {0};
 
    int i;
     
     if(strlen(str1) != strlen(str2))
     {
        
         return 0;
   
      }
     

 
    for(i = 0; str1[i] != '\0'; i++)
     {
    
        a[str1[i]]++;

      }
     
    
      for(i = 0; str2[i] != '\0'; i++)
     {
    
        b[str2[i]]++;
  
      }
     

      for(i = 0; i < 256; i++)
     {
        
       if(a[i] != b[i])
 
            return 0;
   
      }
     
 
     return 1;

}