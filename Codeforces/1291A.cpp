problem link--> https://codeforces.com/contest/1291/problem/A

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); 
#define test ll t; cin>>t; while(t--)
#define mod 1000000007
int main() {
    fast;
    test{
        ll n,i,j,su=0,f=0,x;
        string s;
        cin>>n>>s;
        for(i=0;i<s.length();i++){
            x=s[i]-'0';
            su+=x;
            //cout<<su<<"\n";
            if(su%2==0 && x%2!=0){
                f=1;
                break;
            }
        }
        if(f==1){
            for(j=0;j<=i;j++)cout<<s[j];
            cout<<"\n";
        }
        else cout<<"-1\n";
    }
	return 0;
}
