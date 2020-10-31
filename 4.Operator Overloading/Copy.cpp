#include <iostream>
#include<string.h>
using namespace std;
class mystring
{
  char a[100];
  public:
  char b[100];
  void getdata()
  {
    cin>>a;
  }
  void operator ==(int c)
  {
    strcpy(b,a);
  }
};
int main()
{
  mystring obj;
  obj.getdata();
  int a=3;
  obj.operator ==(a);
  cout<<"Copied String is:"<<obj.b;
  return 0;
}