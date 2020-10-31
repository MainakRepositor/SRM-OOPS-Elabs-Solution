#include <iostream>
using namespace std;
class Time
{
  int hours,mins,secs;
  public:
  void operator >>(int b)
  {
    cin>>hours>>mins>>secs;
  }
  void operator <<(int b)
  {
    cout<<hours<<" Hours "<<mins<<" Mins "<<secs<<" secs";
  }
};
int main() {
 Time t;
  int a=3;
      t.operator >>(a);
      t.operator <<(a);
 return 0;
}
