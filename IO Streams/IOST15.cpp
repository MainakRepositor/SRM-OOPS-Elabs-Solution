#include <iostream>
using namespace std;
int main() {
 int a;
  cin>>a;
  cout.fill('*');
 cout.setf(ios::right,ios::adjustfield);
   cout.width(a);
   cout<<"SRM"<<endl;
   cout.fill('*');
    cout.setf(ios::left,ios::adjustfield);
   cout.width(a);
   cout<<"SRM";
 return 0;
}