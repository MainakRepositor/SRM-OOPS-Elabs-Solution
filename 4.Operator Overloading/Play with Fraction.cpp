#include <iostream>
using namespace std;
  class Fraction
  {
    public:
    int numerator,denominator;
 
    Fraction()
    {
      numerator=0;
      denominator=0;
    }
 
    void getinput()
    {
      cin>>numerator>>denominator;
    }
 
    Fraction operator+ (Fraction obj)
    {
      Fraction temp;
      temp.numerator=(numerator*obj.denominator)+(denominator*obj.numerator);
      temp.denominator=denominator*+obj.denominator;
      return temp;
    }
  };

   int main()
   {
     Fraction f1,f2,add;
     f1.getinput();
     f2.getinput();
     //+obj;
     add=f1+f2;
     cout<<add.numerator<<"/"<<add.denominator;
   // add.output();
   
return 0;
}
