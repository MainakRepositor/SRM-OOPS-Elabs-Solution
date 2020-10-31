#include <iostream>
using namespace std;
class complex
{
  public:
  int a,b,c,d;
  friend void sum();
  void input()
  {
    cin>>a>>b>>c>>d;
  }
  void display()
  {
    cout<<a+c<<"+i"<<b+d;
  }
};
void sum(complex obj)
{
}
int main()
{
  complex obj;
  obj.input();
  obj.display();
  return 0;
}
