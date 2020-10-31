#include <iostream>
using namespace std;
template <class T>
  int GetMax(T x, T y, T z)
{ 
   if(x>y)
    {
       if(x>z)
           cout<<x;
       else
           cout<<z;
    }
   else if(y>z)
       cout<<y;
   else
       cout<<z;
   return 0;
}
int main() {
 long a,b,c;
   cin>>a>>b>>c;
   GetMax(a,b,c);
 return 0;
}