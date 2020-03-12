problem link--> https://codeforces.com/contest/1248/problem/B

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	ll n,i,s1=0,s2=0;
	cin>>n;
	ll a[n+1];
	for(i=0;i<n;i++)cin>>a[i];
	sort(a,a+n);
	//x=n/2;
	for(i=0;i<n/2;i++)s1+=a[i];
	for(i=n/2;i<n;i++)s2+=a[i];
	cout<<s1*s1+s2*s2;
	return 0;
}
