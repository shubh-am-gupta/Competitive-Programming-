problem link--> https://www.codechef.com/OCT19B/problems/MARM

#include <iostream>
using namespace std;
typedef long long int ll;
int main() {
	int t;cin>>t;
	while(t-->0){
	    ll n,i,a[1000001],k,j,x,y;
	    cin>>n>>k;
	    for(i=0;i<n;i++)cin>>a[i];
	    if(k<=3*n){
	       for(i=0;i<k;i++)
            a[i%n]=a[i%n]^a[n-1-i%n];
	    }
	    else{
	       for(i=0;i<3*n;i++)
	        a[i%n]=a[i%n]^a[n-1-i%n];
	       k%=3*n;
	       for(i=0;i<k;i++)
            a[i%n]=a[i%n]^a[n-1-i%n];
	    }
        for(i=0;i<n;i++)cout<<a[i]<<" ";
	    cout<<endl;
	    }
	return 0;
}
