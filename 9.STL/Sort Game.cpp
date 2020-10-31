#include <bits/stdc++.h>

using namespace std;

int main() {
 int n;
 cin >> n;
 int x;
 vector<int>v;
 while(n--) {
  cin >> x;
  v.push_back(x);
 }
 sort(v.begin(), v.end());
 for (auto i:v) {
  cout << i << " ";
 }
 return 0;
}