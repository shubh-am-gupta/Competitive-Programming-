problem link--> https://www.codechef.com/FEB20B/problems/LONGCOOK/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); 
#define test ll t; cin>>t; while(t--)
using namespace std;
ll d=0,a[405]={0};
void year(ll i){
    ll b[7]={4,5,6,7,1,2,3};
    if(i%400==0 || (i%4==0 && i%100!=0)){
        d++;
        if(b[d%7]==6)
         a[i]=a[i-1]+1;
        else
         a[i]=a[i-1];
    }
    else{
        if((i-1)%400==0 || ((i-1)%4==0 && (i-1)%100!=0))
         d+=2;
        else
         d++;
        if(b[d%7]==6||b[d%7]==7)
         a[i]=a[i-1]+1;
        else
         a[i]=a[i-1];
    }
}
int main() {
    ll i;
    a[0]=0;a[1]=0;
    for(i=2;i<401;i++){
       year(i);
    }
     test{
        ll m1,m2,y1,y2,s;
        
        cin>>m1>>y1>>m2>>y2;
        

        if(m1>2)y1++;
        if(m2<2)y2--;
        if(y1>y2){
            cout<<"0\n";
            continue;
        } 
        y1--;
        s=a[y2%400]+(a[400]*(y2/400))-(a[y1%400]+(a[400]*(y1/400)));
        
        cout<<s<<"\n";
    }
	return 0;
}
