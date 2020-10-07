/* problem link--> https://www.codechef.com/FEB20B/problems/THEATRE */

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); 
#define test ll t; cin>>t; while(t--)
using namespace std; 

int main() {
    fast;
    ll sum = 0;
    test{
        ll n , i , j , k , l , h , s , ss , x , a[4][4] = {0} , m=INT_MIN;
        char c;
        cin>>n;
        for(i = 0; i < n; i++){
            cin>>c>>s;
            a[c - 'A'][s/3 - 1]++;
        }
        string permutations[] = {"1234","1243","1324","1342","1423","1432","2134","2143","2314","2341","2413","2431","3124","3142","3214","3241","3412","3421","4123","4132","4213","4231","4312","4321"};
        for(string pat : permutations){
            int i = pat[0] - '0' - 1 , j = pat[1] - '0' - 1, k = pat[2] - '0' - 1 , l = pat[3] - '0' - 1;
            ll b[4];
            b[0] = a[0][i] , b[1] = a[1][j] , b[2] = a[2][k] , b[3] = a[3][l];
            sort(b , b + 4); 
            x = 25 , ss = 0;
            for(h = 0; h < 4; h++){
                if(b[h] == 0)
                    ss -= 100;
                else 
                    ss += b[h] * x;
                x += 25;
            }
            m = max(m , ss);
        }
        cout<<m<<"\n";
        sum += m;
    }
    cout<<sum;
	return 0;
}
