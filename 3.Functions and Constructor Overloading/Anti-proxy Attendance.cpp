#include <iostream>
#include <string.h>
using namespace std;
class Student
{
  char stuname[20];
  public:
   Student()
   {
     cout<<"No Attendance";
   }
  Student(char name[])
  {
    strcpy(stuname,name);
  }
  void display()
  {
    cout<<"\nHello "<<stuname<<endl;
  }
};
int main()
{
 Student stdabs;
    char new_name[20];
    cin>>new_name;
    Student stdpst(new_name);
    stdpst.display();
 return 0;
}