problem link--> https://codeforces.com/contest/1311/problem/A

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); 
#define test ll t; cin>>t; while(t--)
#define mod 1000000007
int main() {
    fast;
    test{
        ll a,b;
        cin>>a>>b;
        if(a==b){
            cout<<0<<"\n";
            continue;
        }
        if(a>b){
            if((a-b)%2)cout<<"2\n";
            else cout<<"1\n";
        }
        else{
            if((b-a)%2)cout<<"1\n";
            else cout<<"2\n";
        }
    }
    return 0;
}
