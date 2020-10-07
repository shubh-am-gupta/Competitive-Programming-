/* problem link--> https://www.codechef.com/JUNE19B/problems/RSIGNS */

#include<iostream>
using namespace std;

#define ll long long
const ll mod = 1e9 + 7;

ll power(ll a , ll b){
    ll res = 1;
    a = a % mod;
    while(b > 0){
        if(b & 1)
            res = (res * a) % mod;
        a = (a * a) % mod;
        b = b>>1;
    }
    return res;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long t , k , s , n; 
    cin>>t;
    while(t--){
        cin>>k;
        n = k - 1;
        cout<<power(2 , n)*10 % mod<<endl;
    }
    return 0;
}
