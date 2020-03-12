problem link--> https://codeforces.com/contest/1294/problem/A

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); 
#define test ll t; cin>>t; while(t--)
int main() {
    fast;
    test{
       ll a[3],n,x;
       cin>>a[0]>>a[1]>>a[2]>>n;
       sort(a,a+3);
       x=a[2]-a[0]+a[2]-a[1];
       if(x<=n)
        n-=x;
       else{
           cout<<"NO\n";
           continue;
       }
       if(n%3==0)cout<<"YES\n";
       else cout<<"NO\n";
    }
	return 0;
}
