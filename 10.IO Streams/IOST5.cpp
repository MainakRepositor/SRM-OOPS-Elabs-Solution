#include <iostream>
using namespace std;
int main()
{
  char a[100];
  cin.get(a,100);
  int x=0;
  for(int i=0;a[i]!='\0';i++)
  {
    if(a[i]=='s')
    {
      cout<<"sS";
    }
    else
    {
      cout<<a[i];
    }
  }
  if(x==1)
  {
    cout<<"std::cin.putback('S')";
    cout<<"cout.put";
  }
  return 0;
}