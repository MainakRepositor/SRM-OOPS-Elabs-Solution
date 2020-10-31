#include <iostream>
using namespace std;
class TestClass
{
  public:
class Salary
{
  public:
  Salary()
  {
    int deftsalary;
    deftsalary=10000;
    cout<<deftsalary<<endl;
  }
  Salary(int ExpectedSalary)
  {
    cin>>ExpectedSalary;
    cout<<ExpectedSalary<<endl;
  }
};
};
int main()
{
  TestClass::Salary myobj;
  int ExpectedSalary;
  cin>>ExpectedSalary;
  TestClass::Salary myobj2(ExpectedSalary);
  return 0;
}
