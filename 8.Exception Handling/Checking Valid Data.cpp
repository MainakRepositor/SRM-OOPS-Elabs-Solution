#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int a;
   try
    { 
       cin>>a;
       if(cin)
        {
     if (a>0 && a<=100)
     {
        cout<<"Valid Mark";
     }
       else
       {
         cout<<"Invalid Mark";
       }
        }
     
       else
        {
   throw a;
        }
    }
   catch(int a)
    {
       cout<<"Invalid input. Try again";
    }
 return 0;
}