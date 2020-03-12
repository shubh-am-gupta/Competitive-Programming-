problem link--> https://codeforces.com/contest/1248/problem/A

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;cin>>t;
	while(t-->0){
	    ll n,m,i,j,e1=0,e2=0,o1=0,o2=0;
	    cin>>n;
	    ll a[n+1];
	    for(i=0;i<n;i++){
	        cin>>a[i];
	        if(a[i]%2==0)e1++;
	        else o1++;
	    }
	    cin>>m;
	    ll b[m+1];
	    for(i=0;i<m;i++){
	        cin>>b[i];
	        if(b[i]%2==0)e2++;
	        else o2++;
	    }
	    cout<<e1*e2+o1*o2<<endl;
	}
	return 0;
}
