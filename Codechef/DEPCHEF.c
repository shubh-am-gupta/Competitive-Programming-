problem link--> https://www.codechef.com/FEB19B/problems/DEPCHEF/ 

#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,i;
        scanf("%d",&n);
        int a[n+1],d[n+1],s,y;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0;i<n;i++)
        {
            scanf("%d",&d[i]);
        }
        s=-1;
        for(i=0;i<n;i++)
        { 

            if(i==0)
            {
            y=a[n-1]+a[i+1];
            if(y<d[i]&&s<d[i])
              s=d[i];
            }
            else if(i==n-1)
            {
                y=a[n-2]+a[0];
                if(y<d[i]&&s<d[i])
                s=d[i];
            }
            else
            {
            y=a[i-1]+a[i+1];
            if(y<d[i]&&s<d[i])
            s=d[i];
            }
        }
        printf("%d\n",s);
    }
    return 0;
}
