#include <iostream>
using namespace std;
class partner
{
  public:
  void findpartner()
  {
    int n=0,s=0,i=0;
    cin>>n;
    if(1<=n && n<=8)
    {
    int arr[n];
    for(i=0;i<n;i++)
    {
      cin>>arr[i];
      if(arr[i]<=8)
      {
      if(arr[i]==1)
        cout<<"4LB\n";
      else if(arr[i]==5)
        cout<<"2MB\n";
      else if(arr[i]==3)
        cout<<"6UB\n";
      else if(arr[i]==2)
        cout<<"5MB\n";
      else if(arr[i]==4)
        cout<<"1LB\n";
      else if(arr[i]==6)
        cout<<"3UB\n";
    }
    }
    }
    
  }
};
int main() {
  partner objname;
  objname.findpartner();
	
	return 0;
}