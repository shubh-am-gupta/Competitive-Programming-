problem link--> https://www.codechef.com/AUG19B/problems/ZOMCAV


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

int main(){
    int t;cin>>t;
    while(t-->0){
     ll n,i,x,y,f=0;
     cin>>n;
     ll c[n+1],h[n+1],a[n+1],d[n+1]={0};
     rep2(i,1,n)
      cin>>c[i];
     rep2(i,1,n)
      cin>>h[i];
     rep2(i,1,n){
         x=i-c[i];y=i+c[i];
         if(x<=0)
          x=1;
         if(y>n)
          y=n;
         d[x]+=1 ; 
         d[y + 1]-=1; 
      }
     a[1]=d[1];
     rep2(i,2,n){
         a[i]=d[i]+a[i-1];
     }
     sort(h+1,h+n+1);
     sort(a+1,a+n+1);
     rep2(i,1,n){
         if(a[i]!=h[i])
          {f=1;break;}
     }
     if(f==0)
     cout<<"YES"<<endl;
     else
     cout<<"NO"<<endl;
    }
     return 0;
}
