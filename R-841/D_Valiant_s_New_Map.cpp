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


ll n, m;

bool check(ll mid, vector<vector<ll>> a)
{
    vector<vector<ll>> pre(n + 1, vector<ll>(m + 1));
    nesfr(n, m)
    {
        if (a[i][j] >= mid) { a[i][j] = 1; }
        else { a[i][j] = 0; }
        pre[i + 1][j + 1] = pre[i + 1][j] + pre[i][j + 1] - pre[i][j] + a[i][j]; // 2-D prefix
    }
    // cout << pre;
    rep(i, mid, n + 1)
    {
        rep(j, mid, m + 1)
        {
            ll sum = pre[i][j] - pre[i - mid][j] - pre[i][j - mid] + pre[i - mid][j - mid];
            // cout << sum;
            if (sum == mid * mid) { return true; }
        }
    }
    return false;
}

void solve()
{
    cin >> n >> m;
    vector<vector<ll>> a(n, vector<ll>(m, 0));
    cin >> a;
    ll ans;
    ll l = 0, r = min(n, m);
    while (l <= r)
    {
        ll mid = (l + r) / 2;
        if (check(mid, a))
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
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
