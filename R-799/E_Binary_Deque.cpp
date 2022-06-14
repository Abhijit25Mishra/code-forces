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
        ll n, x;
        cin >> n >> x;
        vi v(n);
        ll one = 0;
        fr(n)
        {
            cin >> v[i];
            if (v[i] == 1)
            {
                one++;
            }
        }
        if (one < x)
        {
            cout << -1;
        }
        else
        {
            ll cuts = 0;
            ll ans = 0;
            while (ans != x)
            {
                ll siz = v.size();
                ll f = 1, e = 1;
                fr(siz)
                {
                    if (v[i] == 1)
                    {
                        v[i] = -1;
                        break;
                    }
                    if (v[n - 1 - i] == 1)
                    {
                        v[n - 1 - i] == -1;
                        break;
                    }
                    if (v[i] == 0)
                    {
                        f++;
                    }
                    if (v[i] == -1)
                    {
                        f = 0;
                    }
                    if (v[n - 1 - i] == 0)
                    {
                        e++;
                    }
                    if (v[n - 1 - i] == -1)
                    {
                        e = 0;
                    }
                }
                ans++;
                cuts += f;
            }
            cout << cuts;
        }
        nl;
    }
    return 0;
}
