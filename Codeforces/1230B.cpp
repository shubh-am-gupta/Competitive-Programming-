problem link--> https://codeforces.com/contest/1230/problem/B

#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define rep1(i,a,b) for(i=a;i<b;i++)
#define rep2(i,a,b) for(i=a;i<=b;i++)
#define lb lower_bound
#define ub upper_bound
#define pb push_back
 
 int main()
 {
     fast;
     ll n,k,i,c=0;
     cin>>n>>k;
     string a,b;
     cin>>a;
     b=a;
     if(k==0)
     { cout<<b;return 0;
      }
     if(n==1)
     {cout<<0;return 0;
     }
     rep1(i,1,n){
        if(b[0]!='1'){
         b[0]='1';c++;
          }
         if(c>=k)
          break;
        if(b[i]!='0')
        {b[i]='0';
         c++;}
     }
     cout<<b;
     return 0;
 }
