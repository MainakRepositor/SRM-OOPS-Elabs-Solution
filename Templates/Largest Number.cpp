#include <iostream>
using namespace std;
template<class T>
T Large(T n1,T n2)
{
  if (n1>n2)
    return n1;
  else
    return n2;
}
int main()
{
  int x, y;
  float x1, y1;
  cin>>x>>y>>x1>>y1;
  cout << Large(x, y) <<endl;
   cout<< Large(x1, y1);
  return 0;
}