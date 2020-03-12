problem link--> https://codeforces.com/contest/1283/problem/A

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); 
#define test ll t; cin>>t; while(t--)
int main() {
	fast;
	test{
	   int h,m,x,y;
	   cin>>h>>m;
	   x=23-h;
	   y=60-m;
	   cout<<x*60+y<<"\n";
	}
	return
