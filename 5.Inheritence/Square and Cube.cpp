#include <iostream>
using namespace std;
class Number
{
  public:
  int n;
  void getNumber()
  {
    cin>>n;
  }
  void getSquare()
  {
    cout<<n*n<<endl;
  }
  void getCube()
  {
    cout<<n*n*n<<endl;
  }
};
class Square:public Number
{
  public:
  Square()
  {
    getNumber();
    getSquare();
  }
};
class Cube:public Number
{
  public:
  Cube()
  {
    getNumber();
    getCube();
  }
};
int main()
{
  Square objS;
  Cube objC;
  return 0;
}
