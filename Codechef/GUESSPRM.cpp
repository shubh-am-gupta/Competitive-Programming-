problem link--> https://www.codechef.com/JULY19B/problems/GUESSPRM


#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define rep1(i,a,b) for(i=a;i<b;i++)
#define rep2(i,a,b) for(i=a;i<=b;i++)
#define lb lower_bound
#define ub upper_bound
#define pb push_back
#define MAXN   100001

int main(){
    int t;cin>>t;
    while(t-->0){
        long long int a,b,m,n,x,y,k=0,c[1000000],d[1000000],i,l,j=0,u;
        string s;
        a=31628,b=31728;
        cout<<1<<" "<<a<<endl;
        cin>>m;
        x=(a*a)-m;
        while (x % 2 == 0)  
         {  
           c[j]=2;  
           x = x/2;
           j++;
         }  
        for (i = 3; i <= sqrt(x); i = i + 2)  
         {     
           while (x % i == 0)  
          {  
            c[j]=i;
            x = x/i;  
            j++;
          }  
         }  
          if (x > 2) { 
           c[j]=x;
            j++;
           }
        
        cout<<1<<" "<<b<<endl;
        cin>>n;
        y=(b*b)-n;
        while (y % 2 == 0)  
         {  
           d[k]=2;  
           y = y/2;
           k++;
         }  
        for (i = 3; i <= sqrt(y); i = i + 2)  
         {     
           while (y % i == 0)  
          {  
            d[k]=i;
            y = y/i;  
            k++;
          }  
         }  
          if (y > 2) { 
           d[k]=y;
            k++;
           }
           
        for(i=0;i<j;i++){
            for(l=0;l<k;l++){
                if(c[i]==d[l]&&d[l]>max(m,n))
                 {u=d[l];}
            }
        }
        cout<<2<<" "<<u<<endl;
        cin>>s;
        fflush(stdout);
    }
    return 0;
}
