#include <iostream>
using namespace std;
class Bill
{
public:
int a,b;
void getamount()
{
cin>>a>>b;
}
friend float billavg(Bill&,int,int);
};
float billavg(Bill& x,int a,int b)
{
float y;
y=(float)(a+b);
return y/2;
}
int main()
{
Bill obj;
obj.getamount();
cout<<"Average amount spent:"<<billavg(obj,obj.a,obj.b);
return 0;
}
