 #include <iostream>
using namespace std;
class TestClass
{
  public:
class profit
{
  int Income=0,Expenses;
 public:
  void in()
  {
    cin>>Income>>Expenses;
  }
  void out()
  {
    cout<<Income-Expenses;
  }
  profit()
  {
    Income=0;
    Expenses=0;
  }
  profit(int income,int expenses)
  {
    Income=income;
    Expenses=expenses;
  }
};
};
int main() {
 TestClass :: profit s1(0,0);
  s1.in();
  s1.out();
 return 0;
}
