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
        char a[8][8];
        nesfr(8, 8)
        {
            cin >> a[i][j];
        }
        ll b[8], c[8];

        fr(8)
        {
            b[i] = 0;
            c[i] = 0;
        }
        nesfr(8, 8)
        {
            if (a[i][j] == '#')
            {
                b[i]++;
                c[j]++;
            }
        }
        ll x, y;
        for (int i = 1; i < 7; i++)
        {
            if (b[i] == 1 && (b[i + 1] == 2 && b[i - 1] == 2))
            {
                x = i;
            }
            if (c[i] == 1 && (c[i + 1] == 2 && c[i - 1] == 2))
            {
                y = i;
            }
        }
        cout << x + 1 << " " << y + 1 << endl;
    }
    return 0;
}
