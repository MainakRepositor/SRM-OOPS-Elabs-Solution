#include <iostream>
using namespace std;
class AddData
{
  public:
  int mark1,mark2;
  void accept_details()
  {
    cin>>mark1>>mark2;
  }
};
class sports
{
  public:
  int mark3;
  void get()
  {
    cin>>mark3;
  }
};
class Total : public AddData,public sports
{
  public:
  int d;
  void total_of_three_subjects()
  {
    d=(mark1+mark2+mark3)/3;
  }
 
};
class Percentage : public Total
{
  public:
  int e;
  void calculate_percentage()
  {
    e=(mark1+mark2+mark3)/3;
  }
  void show_result()
  {
    cout<<e;
  }
};
int main()
{
  Percentage p;
  p.accept_details();
  p.get();
  p.total_of_three_subjects();
  p.calculate_percentage();
  p.show_result();
  return 0;
}