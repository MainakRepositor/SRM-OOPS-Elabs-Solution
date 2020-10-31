#include <iostream>
using namespace std;

class A{ 
public:
  int x;
};

class B:public A{ 
public:
 B()
  {
    cin >> x;
 }
};
class C{
public:
  int y;
  C(){
    cin >> y;
  }
};
class D:public B,public C
{
public:
  void sum()
  {
  int sum;
  sum=x+y;
    cout << "Sum= " << sum << endl;
  }
};

int main() {
  D obj;
  obj.sum();
 return 0;
}
