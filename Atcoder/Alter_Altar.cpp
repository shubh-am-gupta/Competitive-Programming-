Problem link --> https://atcoder.jp/contests/abc174/tasks/abc174_d

#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define pb push_back
#define lb lower_bound
#define ub upper_bound
#define bs binary_search
#define F first
#define S second
#define all(v) v.begin(),v.end()
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
   #ifndef ONLINE_JUDGE
   freopen("input.txt","r",stdin);
   freopen("output.txt","w",stdout);
   #endif
 
    ll t=1,tc;
    //cin>>t;
    for(tc=1;tc<=t;tc++){
      string s,v;
      ll n,i,l,r,c=0;
      cin>>n>>s;
      v=s;
      sort(all(v));
      if(v[0]==v[n-1]){
          cout<<"0";
          continue;
      }
      l= 0; r= n-1;
      while(l<=r){
          if(s[l]=='W' && s[r]=='R'){
              c++;
              swap(s[l],s[r]);
          }
          else if(s[l]=='R')
           l++;
          else if(s[r]=='W')
           r--;
      }
      cout<<c;
    }
	return 0;
}