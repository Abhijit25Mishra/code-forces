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
template<typename typC> istream &operator>>(istream &cin, vector<typC> &a) { for (auto &x : a) cin >> x; return cin; }
template<typename typC> ostream &operator<<(ostream &cout, const vector<typC> &a) { int n = a.size(); if (!n) return cout; cout << a[0]; for (int i = 1; i < n; i++) cout << ' ' << a[i]; return cout; }
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



void solve()
{
    ll n, c;
    cin >> n >> c;
    vector<pair<ll, ll>> a(n);
    fr(n)
    {
        ll x;
        cin >> x;
        a[i] = { min(x + i + 1,x + n - i), x + i + 1 };
    }
    sort(all(a));
    vi sum(n + 1);
    fr(n)
    {
        sum[i + 1] = sum[i] + a[i].first;
    }



    ll ans = 0;
    fr(n)
    {
        if (a[i].second <= c)
        {
            ll lo = 0, hi = n;

            while (lo < hi)
            {
                ll x = (lo + hi + 1) / 2;
                ll val = sum[x];
                if (x > i)
                {
                    val -= a[i].first;
                }
                if (val + a[i].second <= c)
                {
                    lo = x;
                }
                else
                {
                    hi = x - 1;
                }

            }
            ans = max(ans, 1 + lo - (lo > i));

        }
    }
    cout << ans;
    nl;

}
int main()
{
    fast;
    ll t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
