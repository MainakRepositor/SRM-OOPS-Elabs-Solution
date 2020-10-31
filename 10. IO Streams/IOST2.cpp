#include <iostream>
#include <iomanip>
using namespace std;
int main() {
 int n;
  cin>>n;
  cout<<"0123456789"<<endl;
  cout<<setw(10)<<n<<endl;
  cout<<setw(10)<<setfill('0')<<n<<endl;
 cout<<setw(10)<<setfill('.')<<n<<endl;
 return 0;
}