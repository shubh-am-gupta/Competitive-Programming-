problem link--> https://codeforces.com/contest/1230/problem/A

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
 
 int wah1(int arr[], int i, int sumCalculated, int sumTotal) 
{
    if (i==0) 
        return abs((sumTotal-sumCalculated) - sumCalculated); 
 
    return min(wah1(arr, i-1, sumCalculated+arr[i-1], sumTotal), 
               wah1(arr, i-1, sumCalculated, sumTotal)); 
} 
int wah(int arr[], int n) 
{ 
    int sumTotal = 0; 
    for (int i=0; i<n; i++) 
        sumTotal += arr[i]; 
    return wah1(arr, n, 0, sumTotal); 
}
 int main()
 {
     fast;
     int a[5],i;
     for(i=0;i<4;i++)
      cin>>a[i];
     if(wah(a,4)==0)
     cout<<"YES"<<endl;
     else 
     cout<<"NO"<<endl;
     return 0;
 }
