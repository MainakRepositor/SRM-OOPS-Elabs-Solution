#include<iostream>
using namespace std;
class Time
{
private:
int hour, min;
public:
friend ostream & operator << (ostream &out, const Time &c);
friend istream & operator >> (istream &in, Time &c);
friend void operator >>(Time &hourw, Time &minw);
};
istream & operator>>(istream &in, Time &c)
{
in >> c.hour;
in >> c.min;
return in;
}
ostream & operator << (ostream &out, const Time &c)
{
cout << "dx="<< c.hour << " dy=" << c.min;
return out;
}
int main()
{
Time c1;
cin >> c1;
cout << c1;
return 0;
}
