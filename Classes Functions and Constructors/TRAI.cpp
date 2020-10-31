#include <iostream>
using namespace std;
class Phone{
  public:
  int stdCode,exchangeCode,phoneNumber;
  void change(){
    char inputNumber[13];
    cin >> inputNumber;
    int test[13],i;
    for(i=0;i<13;i++){
      test[i] = inputNumber[i];
      test[i]-=48;
    }
    for(i=0;i<3;i++){
      if(test[i]==0) test[i]=91;
      cout << test[i];
    }
    for(i=3;i<13;i++){
      cout << inputNumber[i];
    }
  }
   
};
int main(){
  Phone obj;
  obj.change();
  return 0;
}