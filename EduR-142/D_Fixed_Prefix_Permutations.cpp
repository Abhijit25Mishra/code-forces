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

int get(const vector<ll> &a, const vector<ll> &b)
{
    int res = 0;
    while (res < int(a.size()) && a[res] == b[res])
        ++res;
    return res;
}

void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<vector<ll>> a(n, vector<ll>(m)), b(n, vector<ll>(m));
    nesfr(n, m)
    {
        cin >> a[i][j];
        a[i][j]--;
    }
    nesfr(n, m)
    {
        b[i][a[i][j]] = j;
    }
    sort(all(b));
    fr(n)
    {
        int j = lower_bound(b.begin(), b.end(), a[i]) - b.begin();
        int ans = 0;
        if (j > 0) ans = max(ans, get(a[i], b[j - 1]));
        if (j < n) ans = max(ans, get(a[i], b[j]));
        cout << ans << " ";

    }
    nl;
    // cin >> a;
    // vi x;
    // fr(n)
    // {
    //     ll ans = 0;
    //     rep(j, 0, n)
    //     {
    //         ll k = 0;
    //         ll x = a[i][k] - 1;
    //         while (a[j][x] == k + 1)
    //         {
    //             k++;
    //             if (k < m)
    //                 x = a[i][k] - 1;
    //         }
    //         ans = max(ans, k);
    //     }
    //     x.pb(ans);
    // }
    // cout << x;
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
