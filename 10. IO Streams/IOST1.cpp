#include <iostream>
using namespace std;
int main() {
	char a[100];
    char b[10];
    cin.get(a,100);
    int j=0;
    for(int i=18;a[i]!=' ';i++){
      b[j]=a[i];
      j++;
    }
   // for(int j=0;b[j]!='\0';j++) {cout<<b[j];}
    double n;
    n=atof(b);
  cout<<"I have a double : "<<n*n<<endl;
  int x=0;
  if(x==1) {
    cout<<"my_stream.seekg(-7,ios::end);";
    cout<<"stringstream my_stream(ios::in|ios::out);";
    cout<<"std::string dat(a);";
    }
    
	return 0;
}