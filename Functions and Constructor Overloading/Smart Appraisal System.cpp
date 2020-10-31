#include <iostream>
#include <string.h>
using namespace std;
class TestClass
{
  public:
class Appraisal
{
  int sal;
  public:
  void in()
  {
    cin>>sal;
  }
  void out()
  {
    cout<<"\nNew Salary:"<<sal;
  }
  Appraisal()
  {
    sal=30000;
    cout<<"Old Salary:"<<sal;
 
  }
};
};
int main() {

 TestClass::Appraisal myobj;
  TestClass::Appraisal myobj2();
  myobj.in();
  myobj.out();
 return 0;
}
