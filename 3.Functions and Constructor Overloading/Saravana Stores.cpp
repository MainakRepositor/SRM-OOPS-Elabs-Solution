#include <iostream>
using namespace std;
class Salary
{
  public:
  int Increment(int currsal)
  {
    cin>>currsal;
  }
  int Increment(int currsal, int bonus)
  {
    return currsal+bonus;
  }
};
int main()
{
  int currsal,x,bonus;
  cin>>currsal>>x>>bonus;
  Salary ob;
  ob.Increment(currsal);
  
  cout<<ob.Increment(currsal,bonus)<<endl;
  cout<<(currsal+x)<<endl;
  return 0;
}