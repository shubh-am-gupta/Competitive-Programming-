problem link--> https://codeforces.com/contest/1257/problem/B

#include <iostream>
#include<algorithm>
#include<vector>
#include<cmath>
using namespace std;
typedef long long ll;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;cin>>t;
	while(t--){
	    ll x,y;
	    cin>>x>>y;
	    if(x==y)cout<<"YES\n";
	    else if(x==1)cout<<"NO\n";
	    else if(x==2||x==3){
	        if(y<=3)cout<<"YES\n";
	        else cout<<"NO\n";
	    }
	    else
	    cout<<"YES\n";
	    }
	   
	return 0;
}
