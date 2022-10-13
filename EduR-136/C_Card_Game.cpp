// Aur Bhai Dekhne aagaye ;)
// Author: Abhijit Mishra 
#pragma GCC optimize("Ofast")
#pragma GCC optimize("no-stack-protector")
#pragma GCC optimize("unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,popcnt,abm,mmx,tune=native")
#pragma GCC optimize("fast-math")
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#pragma GCC target("avx,avx2,fma")
#include <bits/stdc++.h>
using namespace std;
#define pi (3.141592653589)
#define mod 1000000007
#define pb push_back
#define is insert
#define mp make_pair
#define ff first
#define ss second
#define all(x) x.begin(), x.end()
#define min3(a, b, c) min(c, min(a, b))
#define min4(a, b, c, d) min(d, min(c, min(a, b)))
#define rfr(n) for(int i=n-1;i>=0;i--)
#define rep1(i,a,b) for(long long i=a;i<=b;i++)
#define fr(n) for(long long i=0;i<n;i++)
#define nesfr(x,y) for(long long i=0;i<x;i++)for(long long j=0;j<y;j++)
#define rep(i,a,b) for(long long i=a;i<b;i++)
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
typedef long long int ll;
typedef long double ld;
typedef vector<ll> vi;
#define nl cout << "\n"
const unsigned int M = 1000000007;
const int  N = 2e5 + 5;

vector<ll> dp(65, -1);

ll fact(ll x)
{
    //base case
    if (x == 0) { return 1; }
    if (x == 1) { return 1; }

    //dp
    if (dp[x] != -1) { return dp[x]; }

    //recursive case
    return dp[x] = (x * (fact(x - 1) % M)) % M;
}

ll dp2[65][65];
ll chose(ll a, ll b)
{
    if (dp2[a][b] != -1) { return dp2[a][b]; }
    dp2[a][b] = fact(a) / ((fact(b) * fact(a - b) % M));
    return dp2[a][b];
}

void solve(ll n)
{
    ll k;
    ll ans = chose(n - 1, (n / 2) - 1);
    rep(i, 1, ((n + 1) / 2) - 1)
    {
        k = chose(n / 2, ((n + 1) / 2) + i) / i;
        if (k > 0)
            ans += k;
        else
        {
            break;
        }
    }
    ll ans2 = chose(n, n / 2);
    cout << ans << " " << ans2 - ans - 1 << " " << 1;
    nl;
}

int main()
{
    fast;
    ll t = 1;
    cin >> t;
    nesfr(65, 65) { dp2[i][j] = -1; }
    while (t--)
    {
        ll n;
        cin >> n;
        solve(n);
        // cout << fact(n);
        // nl;
        // nesfr(65, 65) { cout << dp2[i][j] << " "; }

    }
    return 0;
}
