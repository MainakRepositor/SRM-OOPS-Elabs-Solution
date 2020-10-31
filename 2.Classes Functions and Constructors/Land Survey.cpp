#include<iostream>

using namespace std;

class room
{
 int l,b,h;
 public :
  void getroom()
  {
   cin>>l>>b>>h;
  }
  void putroom()
        {
   cout<<"Length="<<l;
              cout<<endl;
          cout<<"Breadth="<<b;
               cout<<endl;
           cout<<"Height="<<h;
               cout<<endl;
  }
};
class address {
 int hno;
 char cty[30];
 char state[30];
 public :
  void getad()
  {
   cin>>hno;
   cin>>cty;
   cin>>state;
  }
  void putad()
  {
     cout<<"House No="<<hno;
              cout<<endl;
              cout<<"City="<<cty;
              cout<<endl;
              cout<<"State="<<state;
              cout<<endl;
  }
};

class house{
 char housename[30];
 address a;
 room r[10];
  int n;

 public :
   void input();
   void display();
};
void house :: input()
{ 
 cin>>housename;
  cout<<"House name="<<housename<<endl;
 a.getad();
    a.putad();
    cin>>n;
 
 for(int i=0;i<n;i++){
 
  r[i].getroom();
 }
}
void house :: display()
{ 

 for(int i=0;i<n;i++){
  cout<<"Details of Room "<<i+1<<"\n";
  r[i].putroom();
 }
}

int main()
{
 house x;
 x.input();
 x.display();
 return 0;
}
