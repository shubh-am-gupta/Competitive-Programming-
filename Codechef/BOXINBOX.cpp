problem link--> https://www.codechef.com/STRT2020/problems/BOXINBOX

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); 
#define test ll t; cin>>t; while(t--)
using namespace std;
int main() {
    fast;
    ll n,i,j,k;
    cin>>n;
    ll a[n+5][n+5];
    for(i=0;i<n;i++)
     for(j=0;j<n;j++)
      cin>>a[i][j];
    j=0;
    ll ans=0;
    for(i=0;i<n/2;i++)
    {
        ll mimi=10000000000;
        for(k=j;k<n-j;k++)
        {
            mimi=min(a[i][k],mimi);
           // cout<<a[i][k]<<" ";
        }///break;
        //cout<<i<<" "<<mimi<<"\n";
        for(k=i;k<n-i;k++)
        {
            mimi=min(a[k][j],mimi);
        }
        
        for(k=i;k<n-i;k++)
        {
            mimi=min(a[k][n-i-1],mimi);
        }//cout<<mimi<<" "<<i<<"\n";
        for(k=j;k<n-j;k++)
        {
            mimi=min(a[n-j-1][k],mimi);
        }
        //cout<<mimi<<" "<<i<<"\n";
        ans+=mimi;
        j++;
        
    }
    if(n%2)
    ans+=a[n/2][n/2];
    cout<<ans;
	return 0;
}
