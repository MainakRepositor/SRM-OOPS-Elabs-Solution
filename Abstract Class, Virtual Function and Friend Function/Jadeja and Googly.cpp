#include <iostream>
using namespace std;

class googly{
  int num;
  public:
  void getballnumber(){
    cin >> num;
  }
  friend int isgoogly(googly);
};

int isgoogly(googly g){
  if(g.num%2 == 0){
    cout << "Not a Googly Ball" << endl;
    return 0;
  }
  cout << "Googly Ball" << endl;
  return 1;
}

int main() {
  googly e1;
  e1.getballnumber();
  isgoogly(e1);
 return 0;
}