problem link--> https://www.codechef.com/FEB19B/problems/MAGICJAR

#include<iostream>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long int n,i;
        scanf("%ld",&n);
        long int a[n+1],sum,m;
        sum=0;
        for(i=0;i<n;i++)
        {
            scanf("%ld",&a[i]);
        }
        for(i=0;i<n;i++)
        {
            sum+=a[i];
        }
        m=sum-n+1;
        printf("%ld\n",m);
    }
    return 0;
}
