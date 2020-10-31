#include<iostream>
using namespace std;

class A{
public:
int a;
void display(int a)
{
cin>>a;
}
};

class B{
public:
int b;
void display(int b){
cin>>b;
}
};

class C:public A,public B
{
public:
int a, b;
void display()
{
cin>>a>>b;
cout<<a*b<<endl;
}
}sample;

int main()
{
sample.display();
return 0;
}