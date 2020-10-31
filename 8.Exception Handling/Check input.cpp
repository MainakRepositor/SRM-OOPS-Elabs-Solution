#include <iostream>
using namespace std;

int main()
{
    int nr = 0; char ch;
 try
 {
    cin >> nr;
   if(cin)
   {
    cin.get(ch);
    if(ch=='.')
    {
        cout << "Floting" << endl;
    }
    else
    {
         cout << "Integer" << endl;
    }
   }
   else
   {
   throw nr;
        }
    }
   catch(int nr)
    {
       cout<<"Invalid input";
    }
 return 0;
}

