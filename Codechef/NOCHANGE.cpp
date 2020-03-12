problem link--> https://www.codechef.com/FEB20B/problems/NOCHANGE

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); 
#define test ll t; cin>>t; while(t--)
using namespace std;
int main() {
     test{
        ll n,p,i,f=0,x,y,j=0,s=0,ss=0,pos,g=0,c=0;
        cin>>n>>p;
        ll d[n+5],a[n+5],b[n+5]={0};
        for(i=0;i<n;i++){
            cin>>d[i];
            if(p%d[i] && f==0){
                f=1;
                pos=i;
            }
        }
        if(f==0){
          for(i=1;i<n;i++){
              x=p/d[i]-1; y=(p-x*d[i])/d[i-1]+1;
              s=x*d[i]+y*d[i-1];
              if(s-d[i]<p && s-d[i-1]<p){
                  g=1;
                  b[i]+=x;b[i-1]+=y;
                  break;
              }
          }
          if(g==1){
              cout<<"YES ";
              for(i=0;i<n;i++)
               cout<<b[i]<<" ";
            }
          else cout<<"NO";
        }
        else{
        cout<<"YES ";
        b[pos]=p/d[pos]+1;
        for(i=0;i<n;i++)
         cout<<b[i]<<" ";
        }
        cout<<"\n";
    }
	return 0;
}
