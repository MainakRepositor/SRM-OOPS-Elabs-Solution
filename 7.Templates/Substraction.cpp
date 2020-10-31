#include <iostream>
using namespace std;
template<class T>
  T displayresult(T n1, T n2)
{
   cout<<n1<<endl<<n2<<endl<<n1-n2;
   return 0;
}
int main() {
 float a,b;
   cin>>a>>b;
   displayresult(a,b);
 return 0;
}