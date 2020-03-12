problem link--> https://codeforces.com/contest/1294/problem/D

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); 
#define test ll t; cin>>t; while(t--)
int main() {
    fast;
    ll q,x,y,visited[400005]={0},mex=0;
    cin>>q>>x;
    while(q--){
        cin>>y;
        visited[y%x]++;
        while(visited[mex%x]>0){
            visited[mex%x]--;
            mex++;
        }
        cout<<mex<<"\n";
    }
	return 0;
}
