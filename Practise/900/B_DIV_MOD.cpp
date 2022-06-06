// Aur Bhai Dekhne aagaye ;)
// Author: Abhijit Mishra
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#pragma GCC target("avx,avx2,fma")
#include <bits/stdc++.h>
using namespace std;
#define pi (3.141592653589)
#define mod 1000000007
#define pb push_back
#define is insert
#define ff first
#define ss second
#define all(x) x.begin(), x.end()
#define min3(a, b, c) min(c, min(a, b))
#define min4(a, b, c, d) min(d, min(c, min(a, b)))
#define rfr(n) for (int i = n - 1; i >= 0; i--)
#define rep1(i, a, b) for (long long i = a; i <= b; i++)
#define fr(n) for (long long i = 0; i < n; i++)
#define nesfr(x, y)                   \
    for (long long i = 0; i < x; i++) \
        for (long long j = 0; j < y; j++)
#define rep(i, a, b) for (long long i = a; i < b; i++)
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
typedef long long int ll;
typedef long double ld;
typedef vector<ll> vi;
#define nl cout << "\n"
const unsigned int M = 1000000007;
const int N = 2e5 + 5;

int main()
{
    fast;
    ll t = 1;
    cin >> t;
    while (t--)
    {
        ll l, r, x;
        cin >> l >> r >> x;
        ll ans = r / x + r % x;
        ll m = r / x * x - 1;
        if (m >= l)
            ans = max(ans, m / x + m % x);
        cout << ans;
        nl;
        // ll max = r / a;
        // ll i = r;
        // ll sum = 0;
        // ll fix;
        // if (r == a)
        // {
        //     fix = (r * max) - 2;
        // }
        // else if (r % a == 0)
        // {
        //     fix = (r * (max - 1)) - 2;
        // }
        // else
        // {
        //     fix = (r * max) - 2;
        // }
        // // cout << i << " " << max << " " << fix << "bale bale";
        // // nl;
        // while (i > fix)
        // {

        //     ll t = i / a + (i % a);
        //     if (t > sum)
        //     {
        //         sum = t;
        //     }
        //     // cout << t << " ";
        //     i--;
        // }

        // ll sum = 0;
        // ll t;
        // ll fix = r - 2 * a;
        // for (ll i = r; i > fix; i--)
        // {
        //     t = i / a + (i % a);
        //     if (t > sum)
        //     {
        //         sum = t;
        //     }
        // }

        // cout << sum;
        // nl;
    }
    return 0;
}
