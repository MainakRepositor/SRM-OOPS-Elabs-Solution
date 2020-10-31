#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
vector<int> myvector;

int main()
{
   int n,i;
   cin>>n;
   int input=0; 
   for(i=0;i<n;i++)
   {
     cin>>input;
     myvector.push_back(input);
   }
   
    make_heap(myvector.begin(), myvector.end());
     
    // Displaying the maximum element of heap
    // using front()
   
    cout << myvector.front() << endl;
     
    return 0;
} 
