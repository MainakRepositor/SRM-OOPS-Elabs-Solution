#include <iostream>
using namespace std;
class concatenate
{
  char a[100],b[100];
  public:
  void read()
  {
cin>>a>>b;
  }
  void operator +()
  {
    cout<<a<<b;
  }
};
int main() {
 concatenate obj;
  obj.read();
  obj.operator +();
 return 0;
}