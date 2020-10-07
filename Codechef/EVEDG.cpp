/* problem link--> https://www.codechef.com/OCT19B/problems/EVEDG */

#include <iostream>
#include<vector>
using namespace std;
typedef long long int ll;
int main() {
	int t;cin>>t;
	while(t-->0){
	    ll n,m,i,check=0,x,u,v;
	    cin>>n>>m;
	    vector<ll> jok(n+1,0);
	    for(i=0;i<m;i++){
	        cin>>u>>v;
	        jok[u]++;jok[v]++;
	    }
	    
	    //for(i=1;i<=n;i++)
	    //cout<<jok[i]<<" ";
	    //return 0;
	    if(m%2==0){
	        cout<<1<<endl;
	        for(i=0;i<n;i++)cout<<1<<" ";
	        cout<<endl;
	    }
	    else{
	        for(i=1;i<=n;i++){
	            if(jok[i]%2==1){
	                x=i;check=1;break;
	            }
	        }
	        if(check==1){
	            cout<<2<<endl;
	           for(i=1;i<=n;i++){
	            if(i==x)cout<<2<<" ";
	            else cout<<1<<" ";
	          }
	          cout<<endl;
	        }
	        else{
	          cout<<3<<endl;
	           for(i=1;i<=n;i++){
	            if(i==u)cout<<2<<" ";
	            else if(i==v)cout<<3<<" ";
	            else cout<<1<<" ";
	         }
	         cout<<endl;
	       }
	    }
	}
	return 0;
}
