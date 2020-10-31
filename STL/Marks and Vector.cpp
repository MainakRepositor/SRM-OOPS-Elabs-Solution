#include <bits/stdc++.h> 
using namespace std;   
int main() 
{
  int input;
    vector<int> myvector; 
  while (cin>>input)
    myvector.push_back(input);
    cout<<*min_element(myvector.begin(),myvector.end())<<" "<<*max_element(myvector.begin(),myvector.end()); 
    return 0; 
} 