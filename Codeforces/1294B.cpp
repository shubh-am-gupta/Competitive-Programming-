problem link--> https://codeforces.com/contest/1294/problem/B

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); 
#define test ll t; cin>>t; while(t--)
bool comp(const pair<ll,ll> &a, const pair<ll,ll> &b) 
{ 
    return (a.second < b.second); 
} 
int main() {
    fast;
    test{
       ll n,i,j,c,d,a,b,f=0,k;
       cin>>n;
       vector<pair<ll,ll>> v;
       for(i=0;i<n;i++){
           cin>>a>>b;
           v.push_back(make_pair(a,b));
       }
       sort(v.begin(),v.end());
       c=0;d=0;
       for(i=0;i<v.size();i++){
           if(v[i].first>=c && v[i].second>=d){
               c=v[i].first; d=v[i].second;
           }
           else{
              f=1;
              break; 
           }
       }
       c=0;d=0;
       if(f)cout<<"NO\n";
       else{
           cout<<"YES\n";
       for(i=0;i<v.size();i++){
           j=v[i].first-c;
           while(j--)
            cout<<"R";
           c=v[i].first;
           k=v[i].second-d;
           while(k--)
            cout<<"U";
           d=v[i].second;
        }
        cout<<"\n";
       }
    }
	return 0;
}
