problem link--> https://www.codechef.com/JUNE19B/problems/RSIGNS


#include<bits/stdc++.h>
using namespace std;

#define mod 1000000007
#define ll long long

ll power(ll a,ll b,ll m){
    ll res=1;
    a=a%m;
    while(b>0){
        if(b&1)
            res=(res*a)%m;
        a=(a*a)%m;
        b=b>>1;
    }
    return res;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
  long long t,k,s,n; cin>>t;
  while(t--){
      cin>>k;
      n=k-1;
      cout<<power(2,n,mod)*10%mod<<endl;
  }
  return 0;
}
