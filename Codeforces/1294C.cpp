problem link--> https://codeforces.com/contest/1294/problem/C

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); 
#define test ll t; cin>>t; while(t--)
int main() {
    fast;
    test{
        ll n,i,j=0,x,y,z,f=0;
        cin>>n;
        if(n<6){
            cout<<"NO\n";
            continue;
        }
        ll a[100005];
        for(i=2;i<=sqrt(n);i++){
            if(n%i==0){
                if(n/i==i)
                 a[j++]=i;
                else {
                    a[j++]=i;
                    a[j++]=n/i;
                }
            }
        }
        sort(a,a+j);
        for(i=0;i<j-1;i++){
            x=a[i];y=a[i+1];
            z=n/(x*y);
            if(binary_search(a,a+j,z) && x*y*z==n && x!=y && y!=z && z!=x){
                f=1;break;
            }
        }
        if(f==1)cout<<"YES\n"<<x<<" "<<y<<" "<<z<<"\n";
        else cout<<"NO\n";
    }
	return 0;
}
