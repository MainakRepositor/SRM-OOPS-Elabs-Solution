#include <iostream>
using namespace std;
class Store
{
  public:
  int itemcount(int id)
  {
    cout<<id;
  }
  int itemcount(int totalavl,int remaining)
  {
    int a;
    a=totalavl-remaining;
      cout<<"\n"<<a;
  }
};
int main()
{
  int a,b,id;
  cin>>id>>a>>b;
  Store ob;
  ob.itemcount(id);
  ob.itemcount(a,b);
 return 0;
}
