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
        ll n;
        cin >> n;
        ll ans = 20;
        ll rem;
        // ans = min(ans, n % 6);
        // ans = min(ans, n % 8);
        // ans = min(ans, n % 10);
        if (n % 6 <= n % 8 && n % 6 <= n % 10)
        {
            ans = 15 * (n / 6);
            rem = n % 6;
        }
        else if (n % 8 <= n % 6 && n % 8 <= n % 10)
        {
            ans = 20 * (n / 8);
            rem = n % 8;
        }
        else
        {
            ans = 25 * (n / 10);
            rem = n % 10;
        }
        if (ans != 0)
        {
            if (rem == 0)
            {
                cout << ans;
            }
            else if (rem < 3)
            {
                cout << ans + 5;
            }
            else if (rem < 5)
            {
                cout << ans + 10;
            }
            else if (rem < 7)
            {
                cout << ans + 15;
            }
            else if (rem < 9)
            {
                cout << ans + 20;
            }
        }
        else
        {
            cout << 15;
        }
        nl;
    }
    return 0;
}
