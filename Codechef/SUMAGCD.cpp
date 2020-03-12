problem link--> https://www.codechef.com/JUNE19B/problems/SUMAGCD


#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll gcd(ll a, ll b) 
{ 
    if (a == 0) 
        return b; 
    return gcd(b % a, a); 
} 
  
// Function to find gcd of array of 
// numbers 
ll findGCD(ll arr[],ll n) 
{ 
    ll i;
    ll result = arr[0]; 
    for(i=1;i<n;i++)
        result = gcd(arr[i], result); 
  
    return result; 
} 

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;cin>>t;
    while(t--){
        ll n,i,j,b,c,d,e,f,m,l,x=0,y=0;
        cin>>n;
        ll a[n+1];
        for(i=0;i<n;i++)
         cin>>a[i];
        sort(a,a+n);
        c=a[n-1];
        if(a[0]==a[n-1])
        cout<<2*c<<endl;
        else{
        //1
        for(i=n-2;i>=0;i--){
            if(a[i]==c)
             x++;
            else{
              d=a[i];
             break;
            }
        }
        b=findGCD(a,n-x-1);
        m=b+c;
        //cout<<m<<endl;
        //2
        for(j=i-1;j>=0;j--){
            if(a[j]==d)
             y++;
             else
             break;
        } 
        e=findGCD(a,n-y-x-2);
        //cout<<e<<endl;
        f=gcd(e,c);
        //cout<<f<<endl;
        l=d+f;
        //comparison between m & l
        if(m>l)
        cout<<m<<endl;
        else
        cout<<l<<endl;
     }
    }
     return 0;
}
