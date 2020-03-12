problem link--> https://codeforces.com/contest/1313/problem/A

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL) 
#define test ll t; cin>>t; while(t--)
#define mod 1e9+7
using namespace std;
int main() {
    fast;
    test{
        ll a[3],i,c=0;
        cin>>a[0]>>a[1]>>a[2];
        sort(a,a+3);
        for(i=0;i<3;i++){
            if(a[i]>0){
                a[i]--;
                c++;
            }
        }
        if(a[1]>0 && a[2]>0){
            a[1]--;a[2]--;
            c++;
        }
        if(a[0]>0 && a[2]>0){
            a[0]--;a[2]--;
            c++;
        }
        if(a[0]>0 && a[1]>0){
            a[0]--;a[1]--;
            c++;
        }
        if(a[0]>0 && a[1]>0 && a[2]>0){
            c++;
        }
        cout<<c<<"\n";
    }
	return 0;
}
