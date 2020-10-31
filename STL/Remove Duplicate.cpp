#include <iostream>
#include <list>

using namespace std;

int  main() {
 list <int> m;
 int n;
 cin >> n;
 int x;
 for (int i=0; i<n; i++) {
  cin >> x;
  m.push_back(x);
 }
 m.unique();
 for (auto v:m)
  cout << v << " ";
 return 0;
}