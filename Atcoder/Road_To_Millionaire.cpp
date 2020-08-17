Problem link --> https://atcoder.jp/contests/m-solutions2020/tasks/m_solutions2020_d
 
                         // TO KAISE HAI AAP LOG!! //
 
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
ll mod=1e9+7;
 
/*/----------------------------- Code begins -----------------------------/*/
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    ll t=1,tc;
    //cin>>t;
    for(tc=1;tc<=t;tc++){
      ll n,k,i,j,s=1000,f,m,c,pos;
      cin>>n;
      ll a[n+5];
      for(i=0;i<n;i++)cin>>a[i];
      for(i=0;i<n-1;){
          f=0;
          m=a[i];
          j=i+1;
          while(j<n){
              if(a[j]>m){
                 f=1;
                 pos=j;
              break;
              }
              m=min(a[j],m);
              j++;
          }
          if(f==0)
           break;
          c=0;
          ll x=(s/m);
          s=s-(x*m);
          s=s+(x*a[pos]);
          i=j;
      }
      cout<<s;
    }
	return 0;
}