#include <iostream>
using namespace std;
class Welcomemsg
{
 public:
 char msg(char fstname[100])
 { 
   cout<<"Hi "<<fstname<<endl;
   return 0;
 }
 char msg(char fstname[100],char lstname[100])
 {
   cout<<"Welcome "<<fstname<<" "<<lstname<<endl;
   return 0;
  }
};
 
int main()
{
  Welcomemsg ob;
  char first_name1[100], first_name2[100], last_name2[100];
  cin>>first_name1>>first_name2>>last_name2;
  ob.msg(first_name1);
  ob.msg(first_name2,last_name2);
  return 0;
}