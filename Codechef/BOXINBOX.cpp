/* problem link--> https://www.codechef.com/STRT2020/problems/BOXINBOX */

#include <iostream>
#include <algorithm>

using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); 
#define test ll t; cin>>t; while(t--)

using namespace std;

int getMinimum(int a , int b , int c , int d , int e){
    int arr[] = {a , b , c , d , e};
    sort(arr , arr + 5);
    return arr[0];
}

int main() {
    fast;
    ll n , i , j , k;
    cin>>n;
    ll a[n + 5][n + 5];
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            cin>>a[i][j];
        }
    }
    j = 0;
    ll ans = 0;
    for(i = 0; i < (n/2 + n%2); i++)
    {
        ll mimi = 1e10 + 7;
        for(k = j; k < n - j ; k++)
        {
            mimi = getMinimum(a[n - i - 1][k] , a[k][i] , a[k][n - i - 1] , a[i][k] , mimi);
        }
        ans += mimi;
        j++;   
    }
    cout<<ans;
	return 0;
}
