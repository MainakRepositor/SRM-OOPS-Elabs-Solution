#include <iostream>
using namespace std;
int main()
{
  int i,j,input=0;
  char temp='A';
  
  cin>>input;
  for(i=1;i<=input;i++)
  {
    for(j=1;j<=i;j++)
    {
      cout<<temp;
    ++temp;
    if (temp=='Z'+1)
      ++temp='A';
    }
    cout<<endl;
  }
  
  return 0;
}

