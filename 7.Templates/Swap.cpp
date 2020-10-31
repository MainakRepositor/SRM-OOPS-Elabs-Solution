#include <iostream>
#include <string.h>
using namespace std;
template<class T>

  void Swap(T &x,T &y)
{
  T z;
   strcpy(z,x);
   strcpy(x,y);
   strcpy(y,z);
};
int main() {
 char a[20], b[20];
   cin>>a>>b;
   Swap(a,b);
   cout<<a<<" "<<b;
 return 0;
}