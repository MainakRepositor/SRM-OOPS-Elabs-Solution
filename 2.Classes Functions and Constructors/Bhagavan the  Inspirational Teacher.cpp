#include<iostream>
#include<string>
using namespace std;
class student
{
  public:
  int roll;
  float height,weight;
  string name;
   
  
  student()
  {
    name = "Bhagavan";
    roll = 1593;
    height = 172.5;
    weight = 60.4;
  }
  
  void readinput()
  {
    cin>>name;
    cin>>roll;
    cin>>height;
    cin>>weight;
  }
  void displaydata()
  {
    cout<<name<<" ";
    cout<<roll<<" ";
    cout<<height<<" ";
    cout<<weight<<endl;
  }
};
  
int main()
  {
    student s1;
    student s2;
    s1.readinput();
    s1.displaydata();
    s2.displaydata();
  	return 0;
  }

  
    