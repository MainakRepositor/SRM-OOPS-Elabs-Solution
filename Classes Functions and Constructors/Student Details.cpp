#include<iostream>
#include<string>
using namespace std;
class Student
{
  public:
  int rollno;
  float height,weight;
  string name;
   
  
  Student()
  {
    name = "Nikhil";
    rollno = 20;
    height = 165.5;
    weight = 58.2;
  }
  
  void read()
  {
    cin>>name;
    cin>>rollno;
    cin>>height;
    cin>>weight;
  }
  void display()
  {
    cout<<name<<" ";
    cout<<rollno<<" ";
    cout<<height<<" ";
    cout<<weight<<endl;
  }
};
  
int main()
  {
    Student s1;
    Student s2;
    s1.read();
    s1.display();
    s2.display();
  	return 0;
  }

  
    