#include <iostream>
using namespace std;
class Sports
{
  public:
  virtual void getdata();
  virtual void display();
};
void Sports::getdata()
  {}
  void Sports::display()
  {}
class Student:public Sports
{
  private:
  long roll;
  string name;
  public:
  void getdata()
  {
  cin>>roll>>name;
  }
  void display()
  {
  cout<<"Student Name is: "<<name;
  cout<<"\nStudent Roll no is: "<<roll;
  }
};
int main() {

 
    Student o;
   
    o.Student::getdata();
    o.Student::display();
 return 0;
}