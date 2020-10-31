#include <iostream>
using namespace std;
class Date
{
  public:
  int day,month,year;
  
  Date()
  {
    day = 0;
    month =0;
    year = 0;
  }
  
  void accept()
  {
    cin>>day>>month>>year;
  }
  void display()
  {
    if(month==1)
      cout<<"January "<<day<<" "<<year;
    else if(month==2)
      cout<<"February "<<day<<" "<<year;
    else if(month==3)
      cout<<"March "<<day<<" "<<year;
    else if(month==4)
      cout<<"April "<<day<<" "<<year;
    else if(month==5)
      cout<<"May "<<day<<" "<<year;
    else if(month==6)
      cout<<"June "<<day<<" "<<year;
    else if(month==7)
     cout<<"July "<<day<<" "<<year;
    else if(month==8)
      cout<<"August "<<day<<" "<<year;
    else if(month==9)
      cout<<"September "<<day<<" "<<year;
    else if(month==10)
      cout<<"October "<<day<<" "<<year;
    else if(month==11)
      cout<<"November "<<day<<" "<<year;
    else if(month==12)
      cout<<"December "<<day<<" "<<year;
  }
};
int main() {
  
  Date a;
  a.accept();
  a.display();
	
	return 0;
}