#include <iostream>
using namespace std;
class Box
{
double width, height, depth;

public:
Box()
{
width = 0;
height = 0;
depth = 0;
}
Box(double samevalue)
{
width = samevalue;
height = samevalue;
depth = samevalue;
}
double volume()
{
return width * height * depth;
}
};
int main()
{
Box mybox1;
double a, vol;
cout << mybox1.volume() << endl;
cin >> a;
Box mybox2(a);
vol = mybox2.volume();
cout << vol;
return 0;
}