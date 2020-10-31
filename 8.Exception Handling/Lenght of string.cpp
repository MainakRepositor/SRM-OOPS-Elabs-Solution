#include <iostream>
#include <cstring>
using namespace std;
int main() {
  string str;
  cin >> str;
  int length = str.length();
  try {
    if (str.empty() || str.length() == 1)
      throw ("Invalid input");
    cout << "Length of the string is: " << length;
  } catch (const char * msg) {
    cout << msg << endl;
  }
  return 0;
}