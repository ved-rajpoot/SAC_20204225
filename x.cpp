/* When I wrote this, only God and I understood what I was doing
* * * * * * * * * Now, only God knows * * * * * * */

#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#include <ext/rope>
using namespace std;
using namespace __gnu_pbds;
using namespace __gnu_cxx;

#define int long long
#define double long double
#define rep(i,a,b,c) for(int i=a;i<b;i+=c)
#define bck(i,a,b,c) for(int i=a-1;i>=b;i-=c)
#define f(i,n) rep(i,0,n,1)
#define rf(i,n) bck(i,n,0,1)
#define fr(i,n) rep(i,1,n+1,1)
#define rfr(i,n) bck(i,n+1,1,1)
#define print(v) for(auto &i:v) cout << i << " ";
#define in(v) for(auto &i:v) cin >> i;
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define all(x) x.begin(),x.end()
#define endl "\n"
#define mem0(a) memset(a , 0 , sizeof(a))
#define mem1(a) memset(a , -1 , sizeof(a))
#define memt(a) memset(a , true , sizeof(a))
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#define fastread ios::sync_with_stdio(false);cin.tie(0)
#define ppc __builtin_popcount;
#define ppcll __builtin_popcountll;
typedef tree<int , null_type ,  less_equal<int> , rb_tree_tag , tree_order_statistics_node_update> ordered_multiset;
typedef tree<int , null_type, less<int> , rb_tree_tag , tree_order_statistics_node_update> ordered_set;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef vector<pair<int,int>> vpii;
typedef pair<int,int> pii;
typedef map<int,int> mii;

int power(int x, int y, int m = LLONG_MAX)
{
    int res = 1;
    x = x % m;
    while (y > 0)
    {
        if (y & 1)
            res = (res * x) % m;
        y = y >> 1LL;
        x = (x * x) % m;
    }
    return res;
}
const int MOD = 1e9 + 7;
const int MOD2 = 998244353;
const int MAX = 1e7+10;
const int N = 2e5+5;
const int intmax = LLONG_MAX;
const int intmin = LLONG_MIN;
const int inf = 2e18;

int mod_inv(int n, int m=MOD) {return power(n, m - 2, m);}
int mod_add(int a, int b, int m=MOD) {a = a % m; b = b % m; return (((a + b) % m) + m) % m;}
int mod_mul(int a, int b, int m=MOD) {a = a % m; b = b % m; return (((a * b) % m) + m) % m;}
int mod_sub(int a, int b, int m=MOD) {a = a % m; b = b % m; return (((a - b) % m) + m) % m;}
int mod_div(int a, int b, int m=MOD) {a = a % m; b = b % m; return (mod_mul(a, mod_inv(b, m), m));}

/* ---------------------------------------------------------------------------------- */

int func(int idx,int n,int sum)
{
    if(idx==n)
    {
        if(sum==26) return 1;
        return 0;
    }
    int ans = 0;
    ans += func(idx+1,n,sum+0);
    ans += func(idx+1,n,sum+2);
    ans += func(idx+1,n,sum+4);
    ans += func(idx+1,n,sum+6);
    return ans;
}
void solve(int tc)
{
    int ans = func(0,6,0);
    cout << ans << endl;
}
int32_t main()
{
    fastread;
    int t=1;
    // cin >> t;
    for(int i=1;i<=t;i++)
    {
        solve(i);
    }
    return 0;
}