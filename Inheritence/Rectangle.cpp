#include <iostream>
using namespace std;
class Area
{
public:
int getArea(int length, int berth)
{
return length*berth;
}
};
class Perimeter
{
public:
int getPerimeter(int length, int berth)
{
return length+length+berth+berth;
}
};
class Rectangle:public Area,public Perimeter
{

};
int main() {
Rectangle rt;
int l,b;
cin>>l>>b;
cout<<rt.getArea(l,b)<<endl;
cout<<rt.getPerimeter(l,b)<<endl;
return 0;
}