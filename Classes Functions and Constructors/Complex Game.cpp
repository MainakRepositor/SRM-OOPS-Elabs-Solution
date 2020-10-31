#include <iostream>
using namespace std;
class Complex
{
  public:
  int real1,real2,img1,img2,sumr,sumi;
  Complex()
  {
    real1 = 0;
    real2 = 0;
    img1 = 0;
    img2 = 0;
    sumi=0;
    sumr=0;
  }
  void getnums()
  {
    cin>>real1>>img1>>real2>>img2;
  }
  void addcomplex()
  {
    sumr = real1+real2;
    sumi = img1+img2;
    
  }
  void displaycomplex()
  {
    cout<<real1<<"+"<<img1<<"i"<<endl;
    cout<<real2<<"+"<<img2<<"i"<<endl;
    cout<<sumr<<"+"<<sumi<<"i"<<endl;
  }
  
};

int main() {
	Complex obj;
  	obj.getnums();
  	obj.addcomplex();
  	obj.displaycomplex();
	return 0;
}