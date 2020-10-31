#include<cmath>
#include<cstdio>
#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;
class Student{
  protected:
  string firstName;
  string lastName;
  int phone;
  public:
    Student(string fname,string lname,int p){
      firstName=fname;
      lastName=lname;
      phone=p;
    }
  void display(){
    cout<<"First Name: "<<firstName<<"\nLast Name: "<<lastName<<"\nPhone: "<<phone;
  }
};
class Grade:public Student{
  private:
  int score;
  public:Grade(string fname,string lname,int phone,int score):Student(fname,lname,phone){
    Grade::score=score;
  }
  char calculate(){
    char ch;
    if(this->score>0&&this->score<40) ch='D';
    else if(this->score>=40&&this->score<60) ch='C';
    else if(this->score>=60&&this->score<75) ch='B';
    else if(this->score>=75&&this->score<90) ch= 'A';
    else if(this->score>=90&&this->score<=100) ch='O';
    return ch;
  }
};
int main(){
  string firstName,lastName;
  int score,phone;
  cin>>firstName;
  cin>>lastName;
  cin>>phone;
  cin>>score;
  Student*stu=new Grade(firstName,lastName,phone,score);
  stu->display();
  Grade* g = (Grade*)stu;
  cout<< "\nGrade: "<<g->calculate();
  return 0;
}