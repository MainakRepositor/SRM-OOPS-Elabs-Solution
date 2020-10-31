#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define mod 1000000007
#define f(i,a,b) for(ll i=a;i<b;i++)
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ii pair<ll,ll>
#define vii vector<ii>
#define F first
#define S second
#define pb push_back
#define mp make_pair
#define MAX 1e9
 
ll modpow(ll base, ll exp, ll modulus) {base %= modulus;ll result = 1;while (exp > 0) {if (exp & 1) result = (result * base) % modulus;base = (base * base) % modulus;exp >>= 1;}return result;}
const ld pi=acos(-1);

int main(){
    IOS;
    ll t;cin>>t;
    while(t--){
        string s;cin>>s;
        ll y=(s[0]-'0')*1000+(s[1]-'0')*100+(s[2]-'0')*10+s[3]-'0';
        ll m=(s[5]-'0')*10+(s[6]-'0');
        ll d=(s[8]-'0')*10+(s[9]-'0');
        if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12)cout<<16-d/2<<endl;
        else if(m==4 || m==6 || m==9 || m==11)cout<<31-d/2<<endl;
        else {bool ok=0;
                if(y%4==0)ok=1;
                if(y%100==0)if(y%400)ok=0;
                if(ok)cout<<15-d/2<<endl;
                else cout<<30-d/2<<endl;
            }
        }
    return 0;
}