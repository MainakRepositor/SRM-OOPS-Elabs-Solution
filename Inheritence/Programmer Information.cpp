#include <iostream>
using namespace std;
class person
{
public:
  int age;
  char name[20];
  char gender[10];
 
  void getdata()
  {
    cin>>name;
    cin>>age;
    cin>>gender;
  }
  void display()
  {
    cout<<"Name: "<<name<<endl;
    cout<<"Age: "<<age<<endl;
    cout<<"Gender: "<<gender<<endl;
  }
};
class employee:public person
{
public:
char n[10];
int salary;

void getdata()
{
cin>>n;
cin>>salary;
}

void display()
{
cout<<"Name of Company: "<<n<<endl;
cout<<"Salary: Rs."<<salary<<endl;
}
};

class programmer:public employee
{
public:
int pl;
void getdata()
{
cin>>pl;
}

void display()
{
cout<<"Number of programming language known: "<<pl<<endl;
}
};
int main()
{
  person obj1;
  employee obj2;
  programmer obj3;
  obj1.getdata();
  obj1.display();
  obj2.getdata();
  obj2.display();
  obj3.getdata();
  obj3.display();
  return 0;
}

