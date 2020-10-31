#include <iostream>
using namespace std;
int main() {
  	float input;
    cin>>input;
	try{
    if(!((float(int(input))==input)&&(input!=0)))
	throw("Invalid input");
    cout<<"Number of exceptions: "<<int(input/4);
    } catch (const char * msg) {
    cout << msg << endl;
    }
    return 0;
}