#include <iostream>
using namespace std;

class parent{
public:
virtual float average(int a, int b, int c)=0;

};

class child:public parent{
public:
float average(int a, int b, int c){
return (a+b+c)/3.0f;
}
};

int main() {

parent *p;
child c;
p=&c;
int a,b,d;
cin>>a>>b>>d;
cout << "Average=" << p->average(a,b,d);
return 0;
}