problem link--> https://codeforces.com/contest/1311/problem/C

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); 
#define test ll t; cin>>t; while(t--)
#define mod 1000000007
 
void up(vector<ll>& D, ll l, ll r) 
{ 
    D[l] += 1; 
    D[r + 1] -= 1; 
} 
 
int main() {
    fast;
    test{
        ll n,i,m;
        string s;
        cin>>n>>m>>s;
        ll p[m+5],a[26]={0};
        ll shu[n]={0};
        for(i=0;i<m;i++){
            cin>>p[i];
            shu[p[i]-1]++;
        }
     for(i=n-2;i>=0;i--)
     {
        shu[i]+=shu[i+1]; 
     }
      for(i=0;i<n;i++){
          a[s[i]-'a']+=shu[i];
      }
      for(i=0;i<n;i++)a[s[i]-'a']+=1;
      
       for(i=0;i<26;i++)cout<<a[i]<<" ";
       cout<<"\n";
    }
    return 0;
}
