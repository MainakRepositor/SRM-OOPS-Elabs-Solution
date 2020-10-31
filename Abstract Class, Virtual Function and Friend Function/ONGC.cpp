#include<iostream>
using namespace std;
class Employee
{public:
virtual int getSalary()=0;
};
class Developer:public Employee
{
public:
int salary;
int getSalary()
{cin>>salary;
cout<<"Salary of Developer : "<<salary<<endl;
}};
class Driver:public Employee
{public :
int getSalary()
{int salary;
cin>>salary;
cout<<"Salary of Driver : "<<salary;}};

int main() {
Developer d;
d.getSalary();
Driver w;
w.getSalary();
return 0;
}