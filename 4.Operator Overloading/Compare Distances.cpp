#include<iostream>
using namespace std;
class Distance
{
 public:
  int feet,inches,feet2,inch2;
  void displayDistance()
  {
    cin>>feet>>inches>>feet2>>inch2;
  }
  void operator <(int b)
  {
    if(feet>feet2)
      cout<<"First One is Greater";
    else if(feet==feet2 && inches>inch2)
      cout<<"First One is Greater";
    else if(feet<feet2)
      cout<<"Second One is Greater";
    else if(feet==feet2 && inches<inch2)
      cout<<"Second One is Greater";
    else
      cout<<"Both are equal";
  }
};
int main()
{
  Distance d;
  d.displayDistance();
  int a=2;
  d.operator <(a);
  return 0;
}