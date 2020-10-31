#include <iostream>
#include <vector>
#include <iterator>
using namespace std;
int main() {
 int num,n;
  cin>>n;
  vector<int>MyVector;
  for(int i=0;i<n;i++)
  {
    cin>>num;
    MyVector.push_back(num);
  }
  vector<int>::iterator ptr;
  for (ptr = MyVector.begin(); ptr < MyVector.end(); ptr++)
        cout << *ptr << " ";
   /*for(int i=0;i<n;i++)
  {
    cout<<MyVector[i]<<" ";
   }*/
  cout<<endl;
 // vector<int>::reverse_iterator;
 vector<int>::reverse_iterator ptr1;
  for (ptr1 = MyVector.rbegin(); ptr1 < MyVector.rend(); ptr1++)
        cout << *ptr1 << " ";
  /* for(int i=n-1;i>=0;i--)
  {
    cout<<MyVector[i]<<" ";
   }*/
 return 0;
}
