problem link--> https://www.codechef.com/JULY19B/problems/PRTAGN

/*
     Coded by 
     Shubham Gupta
     IET LUCKNOW
                    */

#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define rep1(i,a,b) for(i=a;i<b;i++)
#define rep2(i,a,b) for(i=a;i<=b;i++)
#define lb lower_bound
#define ub upper_bound

long num_to_bits[16] = {0, 1, 1, 2, 1, 2, 2, 3,  
                    1, 2, 2, 3, 2, 3, 3, 4};  
  
/* Recursively get nibble of a given number  
and map them in the array */
long dtb(long num)  
{  
    long nibble = 0;  
    if (0 == num)  
        return num_to_bits[0];  
      
    // Find last nibble  
    nibble = num & 0xf;  
      
    // Use pre-stored values to find count  
    // in last nibble plus recursively add  
    // remaining nibbles.  
    return num_to_bits[nibble] +  
            dtb(num >> 4);  
}  

int main(){
   fast;
   int t;cin>>t;
   while(t-->0){
       long q,i,j,x,m,n,sum1,c=0,d=0,a[100001];
       set <long> s;
       cin>>q;
       rep1(i,0,q){
         cin>>x;
       if(s.count(x)==0){
           m=dtb(x);
           if(m%2==0)
           c++;
           else
           d++;
           s.insert(x);
        for(auto j=s.begin();j!=s.end();j++){
         if(x!=*j){
             n=*j^x;
         if(s.count(n)==0){
             s.insert(n);
            m=dtb(n);
            if(m%2==0)
            c++;
            else
            d++;
         }
         }
         }
        }
        cout<<c<<" "<<d<<endl;
        }
   }
 return 0;
 }
