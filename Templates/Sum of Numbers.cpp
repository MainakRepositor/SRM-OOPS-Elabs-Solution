#include <iostream>
using namespace std;
template <class T>
  T sum(T n1, T n2)
{
  return n1+n2;
}
int main() {
 float a,b,c,d;
   cin>>a>>b>>c>>d;
   cout<<sum(a,b)<<endl<<sum(c,d)<<endl<<sum(a,c);
 return 0;
}