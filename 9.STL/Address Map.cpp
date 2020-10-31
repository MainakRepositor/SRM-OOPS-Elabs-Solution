#include<iostream>
#include<map>
using namespace std;
 
int main()
{
  int n,key_to_deleted=3,a[100],b[100],i,j;
 cin>>n;
 map<int,int>mymap;
   
      for(i=0;i<n;i++)
      {
        cin>>a[i]>>b[i];
      }
  for(j=0;j<n;j++)
     mymap.insert({a[j],b[j]});
    cin>>key_to_deleted; 
    mymap.erase(key_to_deleted);
  map<int, int>::iterator it1 ;
    for (it1 = mymap.begin(); it1!=mymap.end();  ++it1)
    cout << it1->first << " " << it1->second << endl;
     
}