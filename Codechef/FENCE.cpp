problem link--> https://www.codechef.com/APRIL19B/problems/FENCE


#include<bits/stdc++.h>
using namespace std;

struct fence
{
    long long r;
    long long c;
};
fence arr[1000000];

bool cr(fence a,fence b)
{
    if(a.r<b.r)
    return 1;
    else if(a.r==b.r)
    {
        if(a.c<b.c)
        return 1;
        else
        return 0;
    }
    else 
    return 0;
}
bool cc(fence a,fence b)
{
    if(a.c<b.c)
    return 1;
    else if(a.c==b.c)
    {
        if(a.r<b.r)
        return 1;
        else
        return 0;
    }
    else 
    return 0;
}
int main()
{
   
    int t;
    cin>>t;
    while(t--)
    {
      long long n,m,k,i,x;
      cin>>n>>m>>k;
      x=k*4;
      for(i=0;i<k;i++)
       cin>>arr[i].r>>arr[i].c;
      sort(arr,arr+k,cr);
      for(i=1;i<k;i++)
      {
          if(arr[i].r==arr[i-1].r)
          {
              if(arr[i].c==arr[i-1].c+1)
              x=x-2;
          }
      }
      sort(arr,arr+k,cc);
      for(i=1;i<k;i++)
      {
          if(arr[i].c==arr[i-1].c)
          {
              if(arr[i].r==arr[i-1].r+1)
              x=x-2;
          }
      }
      cout<<x<<endl;
    }
    return 0;
}
