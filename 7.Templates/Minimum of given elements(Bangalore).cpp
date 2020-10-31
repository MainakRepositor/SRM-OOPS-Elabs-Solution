#include <iostream>
using namespace std;
template <class T>
  void min(T n1,T n2,T n3)
{
   if(n1<n2)
    {
       if(n1<n3)
           cout<<n1;
       else
           cout<<n3;
    }
   else if(n2<n3)
     cout<<n2;
   else
       cout<<n3;
}
int main() {
 float a,b,c;
   cin>>a>>b>>c;
   min(a,b,c);
 return 0;
}

