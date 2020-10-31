#include <iostream>
using namespace std;
class tollbooth{
  public:
  int carsPassed;
  float tollCollected;
  tollbooth(){
    carsPassed=0;
    tollCollected=0;
  }
  void payingcar(double pay){
    carsPassed++;
    tollCollected+=pay;
  }
  void nonpayingcar(){
    carsPassed++;
  }
  void display(){
    cout << "Total number of cars passed = " << carsPassed << endl;
    cout << "Total amount collected = " << tollCollected << endl;
  }
};
int main() {
 tollbooth obj;
    char vehicleNumber[10];
    float payAmount;
    int carsPassed,i;
    cin >> carsPassed;
    for(i=0;i<carsPassed;i++){
      cin >> vehicleNumber >> payAmount;
      if(payAmount>0) obj.payingcar(payAmount);
      else obj.nonpayingcar();
    }
    obj.display();
 return 0;
}