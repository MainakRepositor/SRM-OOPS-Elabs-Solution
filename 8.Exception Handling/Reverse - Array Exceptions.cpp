#include <iostream>
using namespace std;
int main() {
 int a,b[1000],i;
  cin>>a;
  try
  {
  if(a<=20&&a>0)
  {
    for(i=0;i<a;i++)
      cin>>b[i];
    for(i=a-1;i>=0;i--)
      cout<<b[i]<<" ";
  }
    else
    {
      throw(a);
    }
  }
  catch(int e)
  {
    cout<<"Exception occurred";
  }
 return 0;
}
