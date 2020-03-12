problem link--> https://codeforces.com/contest/1283/problem/C

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); 
#define test ll t; cin>>t; while(t--)
ll b(ll arr[], ll l, ll r, ll x) 
{ 
    if (r >= l) { 
        ll mid = l + (r - l) / 2; 
        if (arr[mid] == x) 
            return mid; 
        if (arr[mid] > x) 
            return b(arr, l, mid - 1, x); 
  
        return b(arr, mid + 1, r, x); 
    } 
    return -1; 
}
int main() {
	fast;
	ll n,i,j=0,k=0,x,y,g=0,h=0,p,q;
	cin>>n;
	ll a[n+5],c[n+5],d[n+5],e[n+5];
	vector<pair<ll,ll>> v;
	for(i=0;i<n;i++){
	    cin>>a[i];
	    d[i]=a[i];
	    if(a[i]==0)
	     e[k++]=i+1;
	}
	sort(d,d+n);
	for(i=1;i<=n;i++){
	    if(b(d,0,n,i)==-1)
	     c[j++]=i;
	}
	for(i=0;i<k;i++){
	    v.push_back(make_pair(c[i],e[i]));
	}
	//for(i=0;i<k;i++)cout<<v[i].first<<" "<<v[i].second<<"\n";
	//cout<<"\n";
	for(i=0;i<k;i++){
	    if(i==k-1&&v[i].first==v[i].second)
	     swap(v[i].first,v[i-1].first);
	    else if (v[i].first==v[i].second){
	      swap(v[i].first,v[i+1].first);
	    }
	}
	j=0;
	for(i=0;i<n;i++){
	    if(a[i]==0){
	        a[i]=v[j++].first;
	    }
	}
//	for(i=0;i<k;i++)cout<<v.first<<" ";
//	cout<<"\n";
	for(i=0;i<n;i++)cout<<a[i]<<" ";
	cout<<"\n";
	return 0;
}
