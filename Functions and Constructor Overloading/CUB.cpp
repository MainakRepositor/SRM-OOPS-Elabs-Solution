#include <bits/stdc++.h>
using namespace std;
class AccBalance
{
  public:
  AccBalance()
  {
    cout<<"Zero Balance";
  }
  AccBalance(float bal)
  {
    if(bal>0)
      cout<<"\nPositive";
    else if(bal<0)
      cout<<"\nNegative";
    else
      cout<<"\nZero";
  }
};
int main()
{
  float amount;
  cin>>amount;
  AccBalance defltBal;
  AccBalance currBal(amount);
  return 0;
}