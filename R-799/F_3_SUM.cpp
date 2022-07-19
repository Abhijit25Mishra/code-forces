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
    while (t--)
    {
        ll n;
        cin >> n;
        bool ans = false;
        vi a(10), real;

        fr(n)
        {
            ll temp;
            cin >> temp;
            a[temp % 10]++;
        }
        fr(10)
        {
            if (a[i] > 3)
            {
                a[i] = 3;
            }
            while (a[i] != 0)
            {
                real.pb(i);
                a[i]--;
            }
        }

        ll siz = real.size();
        rep(z, 0, siz)
        {
            rep(y, 0, siz)
            {
                rep(x, 0, siz)
                {
                    if (x != y && y != z && z != x)
                    {
                        ll ssum = real[x] + real[y] + real[z];
                        if (ssum == 3 || ssum == 13 || ssum == 23)
                        {
                            ans = true;
                        }
                    }
                }
            }
        }

        ans ? cout << "YES" : cout << "NO";
        nl;
    }
    return 0;
}
