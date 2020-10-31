#include <iostream>
using namespace std;
class student
{
  public:
  int roll_no,mark1,mark2;
  void get()
  {
    cin>>roll_no>>mark1>>mark2;
  }
};
class sports
{
  public:
  int mark3;
  void getagain()
  {
    cin>>mark3;
  }
};
class statement : public student, public sports
{
  public:
  void display()
  {
    cout<<"Roll No:"<<roll_no<<endl;
    cout<<"Total:"<<mark1+mark2+mark3<<endl;
    cout<<"Average:"<<(mark1+mark2+mark3)/3<<endl;
  }
};
int main()
{
  statement obj;
  obj.get();
  obj.getagain();
  obj.display();
  return 0;
}

