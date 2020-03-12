problem link--> https://www.codechef.com/FEB20B/problems/THEATRE

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); 
#define test ll t; cin>>t; while(t--)
using namespace std; 
int main() {
    fast;
    ll sum=0;
    test{
     ll n,i,j,k,l,h,s,ss,x,a[4][4]={0},m=INT_MIN;
     char c;
     cin>>n;
     for(i=0;i<n;i++){
         cin>>c>>s;
         a[c-'A'][s/3-1]++;
     }
     for(i=0;i<4;i++){
         for(j=0;j<4;j++){
             for(k=0;k<4;k++){
                 for(l=0;l<4;l++){
                     if(i!=j && i!=k && i!=l && j!=k && j!=l && k!=l){
                         ll b[4];
                         b[0]=a[0][i]; b[1]=a[1][j]; b[2]=a[2][k]; b[3]=a[3][l];
                         sort(b,b+4); x=25; ss=0;
                         for(h=0;h<4;h++){
                             if(b[h]==0)
                              ss-=100;
                             else 
                              ss+=b[h]*x;
                             x+=25;
                         }
                         m=max(m,ss);
                     }
                 }
             }
         }
     }
     cout<<m<<"\n";
     sum+=m;
    }
    cout<<sum;
	return 0;
}
