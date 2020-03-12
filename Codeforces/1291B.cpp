problem link--> https://codeforces.com/contest/1291/problem/B

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); 
#define test ll t; cin>>t; while(t--)
#define mod 1000000007
int main() {
    fast;
    test{
       ll n,i,k=0;
       cin>>n;
       ll a[n+5];
       bool front[n]={false},back[n]={false};
       for(i=0;i<n;i++){
           cin>>a[i];
           
       }
       ll l;
       k=0;
       for(i=0;i<n;i++){
          if(a[i]>=k)
          {
              front[i]=true;
              k++;
          }
          else
          break;
       }
       l=0;
       for(i=n-1;i>=0;i--)
       {
           if(a[i]>=l)
           {
               back[i]=true;
               l++;
           }
           else
           break;
       }
       k=0;
       while(k<n&&front[k])
       k++;
       k--;
       l=n-1;
       while(l>=0&&back[l])
       l--;
       l++;
       if(k>=l)
       cout<<"Yes\n";
       else if(k+1==l&&a[k]!=a[l])
       cout<<"Yes\n";
       else
       cout<<"No\n";
    }
	return 0;
}
