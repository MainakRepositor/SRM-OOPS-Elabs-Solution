#include <iostream>
#include <iomanip>
using namespace std;
class Area
{
   public:
   float getArea(float l,float h);
};

float Area::getArea(float l,float h)
{
   return l*h;
}

class Perimeter
{
   public:
   float getPerimeter(float x,float y)
    {
       return (float)2*(x+y);
    }
};

class Rectangle:public Area,public Perimeter
{
   
};
int main() {
 float l,b;
   Rectangle rt;
   cin>>l>>b;
   cout<<rt.getArea(l,b)<<endl;
   cout<< std::fixed << setprecision(2) << rt.getPerimeter(l,b);
 return 0;
}
