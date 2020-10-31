#include <iostream>
#include <vector>
#include <iterator>
using namespace std;
//push_back()
int main() {
  int num,n;
  cin>>n;
  vector<int> myvector;
  for(int i=0;i<n;i++)
  {
    cin>>num;
    myvector.push_back(num);
  }
  vector<int>::iterator ptr;
  for(ptr=myvector.begin(); ptr<myvector.end();ptr++)
        cout << *ptr <<" ";
  cout<<endl;
 vector<int>::reverse_iterator ptr1;
  for (ptr1=myvector.rbegin();ptr1<myvector.rend();ptr1++)
        cout << *ptr1 <<" ";

 return 0;
}