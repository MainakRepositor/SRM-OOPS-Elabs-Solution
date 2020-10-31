#include <iostream>
using namespace std;
int main() {
 double a,b,sum;
  char c;
  cin>>a>>c>>b;
  try
  {
  switch(c)
  {
    case '+':sum=a+b;
      cout<<a<<c<<b<<"="<<sum;
      break;
    case '-':sum=a-b;
       cout<<a<<c<<b<<"="<<sum;
      break;
    case '/':sum=a/b;
       cout<<a<<c<<b<<"="<<sum;
      break;
    case '*':sum=a*b;
       cout<<a<<c<<b<<"="<<sum;
      break;
    default:
      throw(c);
  }
  }
  catch(char c)
  {
    cout<<"Operation Error & is not a valid operator";
  }
 return 0;
}