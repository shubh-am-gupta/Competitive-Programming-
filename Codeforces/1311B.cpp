problem link--> https://codeforces.com/contest/1311/problem/B

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); 
#define test ll t; cin>>t; while(t--)
#define mod 1000000007
int main() {
    fast;
    test{
        ll n,i,f=0,g=0,j,p;
        cin>>n>>p;
        ll a[n+5],b[n+5],c[n+5];
        for(i=0;i<n;i++){
            cin>>a[i];
            c[i]=a[i];
        }
        for(i=0;i<p;i++)cin>>b[i];
        for(i=1;i<n;i++){
            if(a[i]<a[i-1]){
                f=1;
                break;
            }
        }
        sort(c,c+n);
        if(f==0)cout<<"YES\n";
        else{
            for(i=0;i<1000;i++){
                for(j=0;j<p;j++){
                    if(a[b[j]-1]>a[min(n-1,b[j])])
                     swap(a[b[j]-1],a[min(n-1,b[j])]);
                }
            }
            //for(i=0;i<n;i++)cout<<a[i]<<" ";
            for(i=0;i<n;i++){
                if(a[i]!=c[i]){
                    g=1;break;
                }
            }
            if(g)cout<<"NO\n";
            else cout<<"YES\n";
        }
    }
    return 0;
}
