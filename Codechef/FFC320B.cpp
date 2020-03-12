problem link--> https://www.codechef.com/FFC32020/problems/FFC320B

#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll count(ll a, ll b) 
{ 
    return (floor(sqrt(b)) - ceil(sqrt(a)) + 1); 
} 
  
int main() {
	ll t;
	cin>>t;
	while(t--){
	    ll l,r;
	    cin>>l>>r;
	    if(l>r)swap(l,r);
	    cout<<r-l+1-count(l,r)<<"\n";
	}
	return 0;
}
