problem link--> https://www.codechef.com/NOV19B/problems/PHCUL

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double d;
#define w 1000000000000
d duri(ll x1,ll y1,ll x2,ll y2){
    return sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1))*1.0;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;cin>>t;
	while(t--){
	   ll x,y,n,m,k;
	   d s1,s,u,v,w1,w2;
	   ll i,j;
	   ll a[100001],b[100001],c[100001];
	   d nk[100001],mk[100010];
	   cin>>x>>y;
	   cin>>n>>m>>k;
	   for(i=0;i<2*n;i++)cin>>a[i];
	   for(i=0;i<2*m;i++)cin>>b[i];
	   for(i=0;i<2*k;i++)cin>>c[i];
	   //(x,y)-->red point-->green point-->blue point
	   w1=w;
	   for(i=0;i<2*m;i+=2){ w1=w;
	       for(j=0;j<2*k;j+=2){
	           s=duri(b[i],b[i+1],c[j],c[j+1]);
	           if(s<w1){
	               w1=s;
	               //u=c[j];v=c[j+1];
	           }
	       }
	       //mk[i]=u;mk[i+1]=v;
	       mk[i]=w1;
	   }
	   w1=w;
	   for(i=0;i<2*n;i+=2){
	       s1=duri(x,y,a[i],a[i+1]);
	       for(j=0;j<2*m;j+=2){
	           s=duri(a[i],a[i+1],b[j],b[j+1]);
	           s+=(s1+mk[j]);
	           if(s<w1)w1=s;
	       }
	   }
	   //(x,y)-->green point-->red point-->blue point
	   w2=w;
	   for(i=0;i<2*n;i+=2){ w2=w;
	       for(j=0;j<2*k;j+=2){
	           s=duri(a[i],a[i+1],c[j],c[j+1]);
	           if(s<w2){
	               w2=s;
	               //u=c[j];v=c[j+1];
	           }
	       }
	       //nk[i]=u;nk[i+1]=v;
	       nk[i]=w2;
	   }
	   w2=w;
	   for(i=0;i<2*m;i+=2){
	       s1=duri(x,y,b[i],b[i+1]);
	       for(j=0;j<2*n;j+=2){
	           s=duri(b[i],b[i+1],a[j],a[j+1]);
	           s+=(s1+nk[j]);
	           if(s<w2)w2=s;
	       }
	   }
	   cout<<fixed<<setprecision(10)<<min(w1,w2)<<endl;
	   //w1<w2?cout<<w1:cout<<w2;
	   //cout<<"\n";
	}
	return 0;
}
