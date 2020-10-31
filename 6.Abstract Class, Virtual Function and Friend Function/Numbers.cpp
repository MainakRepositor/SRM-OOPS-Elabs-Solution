#include <iostream>
using namespace std;

class Super{
public:
  virtual void nSum()=0;
};

class Sub:public Super{
  int n, b, c;
public:
  void read(){
    cin >> n;
  }
  void nSum(){
    cout << (n*(n-1)/2)+n << endl;
  }
};

int main() {
 
  Super *s;
  Sub sb;
  s=&sb;
  sb.read();
  s->nSum();
 return 0;
}
