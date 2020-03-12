problem link--> https://www.codechef.com/SEPT19B/problems/CHEFK1

#include <iostream>
using namespace std;
typedef long long int ll;

int main()
{
   ll t;cin>>t;
   while(t-->0)
   {
       ll n,m,k;
       cin>>n>>m;
      // n+=1;
       if(n==1)
       {
           if(m==1)
           cout<<1<<endl;
           else if(m==0)
           cout<<0<<endl;
           else
           cout<<-1<<endl;
       }
       else if(n==2)
       {
           if(m==1)
           cout<<1<<endl;
           else if(m==2||m==3)
           cout<<2<<endl;
           else
           cout<<-1<<endl;
       }
       else
       {
       if(m<n-1||m>(n*(n+1))/2)
       cout<<-1<<endl;
      else if(m==n-1||(m<n+2))
       cout<<2<<endl;
      else if(m<=2*n)
       cout<<3<<endl;
       else
       {
         k=(2*m-3*n-1)/n;
         cout<<k+3<<endl;
       }
       }
   }
    return 0;
}
