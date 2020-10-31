#include <iostream>
using namespace std;

class base{
public:
  virtual void mTable()=0;
};

class derived:public base{
  int i1, i2;
public:
  void input(){
    cin >> i1;
  }
  void mTable(){
    cout << i1*1 << " " << i1*2 << " " << i1*3 << " " << i1*4 << " " << i1*5 << endl;
  }
};

int main() {
 
  base *b;
  derived d;
  b=&d;
  d.input();
  b->mTable();
 return 0;
}
