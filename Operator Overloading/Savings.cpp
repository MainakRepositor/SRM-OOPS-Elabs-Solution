#include <iostream>
using namespace std;
class Money
{
private:
int rupees,Paise;
public:
Money()
{
cin>>rupees>>Paise;
}
Money operator +(Money o)
{
Money temp;
temp.rupees=rupees+o.rupees;
temp.Paise=Paise+o.Paise;
return temp;
}
Money operator -(Money o)
{
Money temp;
temp.rupees=rupees-o.rupees;
temp.Paise=Paise-o.Paise;
return temp;
}
void display()
{
cout<<"Rs="<<rupees<<" and "<<Paise<<" Paise"<<endl;
}
};
int main()
{
Money M1,M2,M3,M4,M5;
M4=M2-M3;
M5=M1+M4;
M5.display();
return 0;
}