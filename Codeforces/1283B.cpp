problem link--> https://codeforces.com/contest/1283/problem/B

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); 
#define test ll t; cin>>t; while(t--)
int main() {
	fast;
	test{
	   ll n,k,i,x,y,z;
	   cin>>n>>k;
	   if(n%k==0){
	       cout<<n<<"\n";
	       continue;
	   }
	   x=n%k;
	   y=k/2;
	   z=n/k;
	   if(x>=y)cout<<z*k+y<<"\n";
	   else cout<<z*k+x<<"\n";
	}
	return 0;
}
