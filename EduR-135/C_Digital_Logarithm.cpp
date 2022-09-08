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
    // map<ll, ll> x;
    while (t--)
    {
        ll n;
        cin >> n;
        vi a(n);
        vi b(n);

        fr(n)
        {
            cin >> a[i];
            // x[a[i]]++;
        }
        fr(n)
        {
            cin >> b[i];
            // x[b[i]]++;
        }

        sort(all(a));
        sort(all(b));
        vi c(n), d(n);
        set_difference(all(a), all(b), c.begin());
        set_difference(all(b), all(a), d.begin());

        // for (auto x : c)
        // {
        //     cout << x << " ";
        // }
        // nl;
        // for (auto x : d)
        // {
        //     cout << x << " ";
        // }

        // nesfr(n, n)
        // {
        //     if (a[i] == b[j])
        //     {
        //         a[i] = 0;
        //         b[j] = 0;
        //     }
        // }

        ll ans = 0;
        fr(n)
        {
            if (c[i] >= 10)
            {
                c[i] = log10(c[i]) + 1;
                ans++;
            }

            if (d[i] >= 10)
            {
                d[i] = log10(d[i]) + 1;
                ans++;
            }
        }

        sort(all(c));
        sort(all(d));
        vi e(n), f(n);
        set_difference(all(c), all(d), e.begin());
        set_difference(all(d), all(c), f.begin());
        // nesfr(n, n)
        // {

        //     if (a[i] == b[j])
        //     {
        //         a[i] = 0;
        //         b[j] = 0;
        //     }
        // }

        fr(n)
        {
            if (e[i] > 1)
            {
                ans++;
            }
            if (f[i] > 1)
            {
                ans++;
            }
        }
        cout << ans;
        nl;
    }
    return 0;
}
