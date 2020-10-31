#include <iostream>
using namespace std;
int main() {
  	int num;
	cin>>num;
  	if(num < 18)
      cout<<"Not Eligible";
  	else if(num >=18 && num<=60)
      cout<<"Eligible";
  	else if(num>60)
      cout<<"Not Eligible";
	return 0;
}