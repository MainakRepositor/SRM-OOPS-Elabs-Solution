#include <iostream>
using namespace std;
template<class T>
  T displayresult(T n1, T n2)
{
   return n1/n2;
}
int main() {
 float a,b;
   cin>>a>>b;
   cout<<a<<endl<<b<<endl<<displayresult(a,b);
 return 0;
}