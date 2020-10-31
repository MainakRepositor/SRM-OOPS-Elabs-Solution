#include <iostream>
using namespace std;
class A
{
  public:
  int a;
  void getxval()
  {
    cin>>a;
  }
};
class B
{
  public:
  int b;
  void getyval()
  {cin>>b;
  }
};
class C:public A,public B
{
int c;
public:
void sum()
{
c=a+b;
cout<<"Sum = "<<c;
}
void mul()
{
c=a*b;
cout<<"\nProduct="<<c;
}
};
int main()
{
  C obj;
  obj.getxval();
  obj.getyval();
  obj.sum();
  obj.mul();
  return 0;
}