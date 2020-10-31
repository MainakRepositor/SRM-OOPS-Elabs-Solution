#include <iostream>
using namespace std;
int main() {
	int n;
  	cin>>n;
  	if(n>0)
      cout<<"I am waiting";
    else if(n<0)
      cout<<"I am not waiting";
  	else
      cout<<"Sorry";
	return 0;
}