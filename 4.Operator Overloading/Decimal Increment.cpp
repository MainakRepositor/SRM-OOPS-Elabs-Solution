#include <iostream>
using namespace std;
class Decimal
{
  float a;
  public:
  void in()
  {
    cin>>a;
  }
  void operator ++()
  {
   a=a+0.10;
   cout<<a;
  }
};
int main() {
 Decimal obj;
  obj.in();
  obj.operator ++();
 return 0; }