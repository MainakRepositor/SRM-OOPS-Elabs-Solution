#include<iostream>
using namespace std;
int main()
{
char ch;
while(cin.get(ch))
{
while(cin.peek()=='#')
{
cin.ignore(1,'#');
}
cout<<ch;
}
return 0;
}
  