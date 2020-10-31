#include <iostream>
using namespace std;
template<class T>
  T sum(T n1, T n2, T n3, T n4, T n5)
{
  return n1+n2+n3+n4+n5;
}
int main() {
 int a,b,c,d,e;
   float f,g,h,i,j;
   cin>>a>>b>>c>>d>>e>>f>>g>>h>>i>>j;
   cout<<sum(a,b,c,d,e)<<endl;
   cout<<sum(f,g,h,i,j);
 return 0;
}