#include <iostream>
#include<string.h>
using namespace std;

class StudentData
{char stuName[50];
  public:
 StudentData()
  { cout<<"Student Name is: New Student"<<endl;}
 StudentData(char *n)
 { strcpy(stuName,n);
  cout<<"Student Name is: "<<stuName;}
};

  class TestClass
{ char n[50];
 public:
 TestClass()
 {StudentData myobj;
  cin>>n;
  StudentData myobj2(n);}
};

int main() {
 TestClass t;
 return 0;
}
