Problem link --> https://atcoder.jp/contests/abc147/tasks/abc147_d

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); 
#define test ll t; cin>>t; while(t--)
//103715602
ll mod=1000000007;
ll sum(ll a[],ll n) 
{ 
    ll s=0,i;
    for ( i = 0; i < 64; i++)  
    {
        ll su,e=0,o=0;  
        for (int j = 0; j < n; j++) 
        { 
            if (a[j]%2==0) 
                e++;
            else
                o++; 
            a[j]/= 2; 
        } 
        ll y=e*o;
        ll x=pow(2,i);
        su=((y%mod)*(x%mod))%mod; 
        //cout<<su<<"\n";
        s+=su;  
    } 
    return s; 
}
int main() {
	fast;
	ll n,i,x;
	cin>>n;
	ll a[n+1];
	for(i=0;i<n;i++)cin>>a[i];
	x=sum(a,n);
	cout<<x%mod;
	return 0;
}