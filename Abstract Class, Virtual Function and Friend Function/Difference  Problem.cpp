#include <iostream>
using namespace std;
class parent
{
  public:
  virtual void difference(int a, int b)=0;
};
class child:public parent
{
  public:
  int z;
  void difference(int a, int b)
  {
    z=a-b;
    cout<<"Difference="<<z;
  }
};
int main()
{
  parent *p;
  child c;
  p=&c;
  int a,b;
  cin>>a>>b;
  p->difference(a,b);
  return 0;
}
