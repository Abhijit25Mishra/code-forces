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
    ll n, m;
    cin >> n >> m;
    vi cnt(n + m + 1, 0);
    vi a(n + 1);
    // vi t(n + 1);
    rep(i, 1, n + 1)
    {
        cin >> a[i];
        cnt[a[i]] = m + 1;
    }
    rep(i, 1, m + 1)
    {
        ll p, x;
        cin >> p >> x;
        cnt[a[p]] -= m - i + 1;
        cnt[a[p] = x] += m - i + 1;
    }


    ll ans = 1ll * m * (m + 1) * n;
    // cout << ans;
    // nl;
    rep(i, 1, n + m + 1)
    {
        ans -= 1ll * cnt[i] * (cnt[i] - 1) / 2;
    }
    cout << ans;
    nl;


    // rep(i, 1, m + 1)
    // {
    //     ll p, x;
    //     cin >> p >> x;
    //     p--;
    //     x--;
    //     cnt[a[p]] += i - t[p];
    //     t[p] = i, a[p] = x;
    // }
    // fr(n) { cnt[a[i]] += m + 1 - t[i]; }
    // ll res = 1ll * m * (m + 1) * n;
    // fr(n + m)
    // {
    //     res -= 1ll * cnt[i] * (cnt[i] - 1) / 2;
    // }
    // cout << res;
    // nl;

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
