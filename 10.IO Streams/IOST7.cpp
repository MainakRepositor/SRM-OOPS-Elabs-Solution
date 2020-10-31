#include<iostream>
using namespace std;
int main()
{
   char ch;
   while ( cin.get(ch) )
   {
      if (ch == ' ')
         cin.putback('.');
      else
         cout << ch;
      while (cin.peek() == '#')
         cin.ignore(1,'#');
   }
   return 0;
}