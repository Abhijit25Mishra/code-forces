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

// vector<ll> conv(ll x)
// {
//     vector<ll> k;

//     while (x > 0)
//     {
//         if (x & 1)
//         {
//             k.pb(1);
//         }
//         else
//         {
//             k.pb(0);
//         }
//         x /= 2;
//     }
//     // reverse(all(k));
//     return k;
// }

int main()
{
    // ll x;
    // cin >> x;
    // vi k = conv(x);
    // for (auto t : k)
    // {
    //     cout << t;
    // }

    fast;
    ll t = 1;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vi a(n), b(n);
        vi x(32);

        fr(n)
        {
            cin >> a[i];
        }
        fr(n)
        {
            cin >> b[i];
        }

        // fr(n)
        // {
        //     cin >> a[i];
        //     if (a[i] != 0)
        //     {
        //         vi temp = conv(a[i]);

        //         fr(temp.size())
        //         {
        //             x[i] += temp[i];
        //         }
        //     }
        // }
        // fr(n)
        // {
        //     cin >> b[i];
        //     if (b[i] != 0)
        //     {
        //         vi temp = conv(b[i]);
        //         fr(temp.size())
        //         {
        //             x[i] += temp[i];
        //         }
        //     }
        // }
        // ll ans = 0;
        // fr(32)
        // {
        //     if (x[i] % n == 0 && (x[i] / n) & 1)
        //     {
        //         x[i] = 1;
        //     }
        //     else
        //     {
        //         x[i] = 0;
        //     }
        //     ans += pow(2, i) * x[i];
        // }
        // cout << ans;
        // nl;
    }
    return 0;
}
