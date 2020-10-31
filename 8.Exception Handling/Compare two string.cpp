#include<iostream>
#include<string.h>
using namespace std;
int main() {
char ch[10],ch1[10];
cin>>ch>>ch1;
try
{for(int i=0;ch[i]>48&&ch[i]<57;i++)
throw ch[i];
for(int i=0;ch[i]>48&&ch1[i]<57;i++)
throw ch1[i];
if(strcmp(ch,ch1)!=0)
cout<<ch<<" is not "<<ch1;
else
cout<<ch<<" is "<<ch1;
}
catch(char ch)
{
cout<<"Invalid input Try again";
}

return 0;
}