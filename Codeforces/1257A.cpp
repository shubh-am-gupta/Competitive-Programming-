problem link--> https://codeforces.com/contest/1257/problem/A

#include <iostream>
#include<algorithm>
#include<vector>
#include<cmath>
using namespace std;
typedef long long ll;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;cin>>t;
	while(t--){
	    int n,x,a,b,n1,m1,m2;
	    cin>>n>>x>>a>>b;
	    m2=abs(a-b);
	    //c=x;d=x;
	    if(x==0)cout<<abs(a-b)<<"\n";
	    else{
	       m1=max(a,b);
	       n1=min(a,b);
	       while(m1<n&&x>0){
	           m1+=1;
	           x--;
	       }
	       if(x>0){
	       while(n1>1&&x>0){
	           n1-=1;
	           x--;
	       }
	       }
	       cout<<max(m2,abs(m1-n1));
	       cout<<"\n";
	    }
	}
	return 0;
}
