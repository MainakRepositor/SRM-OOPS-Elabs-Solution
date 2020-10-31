#include <iostream>
#include <ctype.h>
using namespace std;
int main() {
 int a,b=244;
  cin>>a>>b;
  try
  {
    if( b!=0 && b!=244)
      cout<<"VALID";
   
 
      else
        throw(b);
  }
  catch(int e)
  {
    cout<<"INVALID: Exception: 0";
  }
 return 0;
}