// problem link--> https://www.codechef.com/FEB19B/problems/HMAPPY2 //

#include <stdio.h>
long long int gcd(long long int a,long long int b) 
{ 
    if (a == 0)  return b; 
    return gcd(b % a, a); } 
  
int main()
{
 int t;
 scanf("%d",&t);
 while(t--)
 {
     long long n,a,b,k,g,c,s,l;
     scanf("%lld %lld %lld %lld",&n,&a,&b,&k);
     l=(a*b)/gcd(a,b);
     s=(n/a)+(n/b)-2*(n/l);
     if(s>=k)
     printf("Win\n");
     else
     printf("Lose\n");
     }
 return 0;
}
