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

long long f[100005];
ll solve(vector<ll> m, ll i, vector<ll> &dp)
{
    // base case
    if (i < 0) { return 0; }

    // dp case
    if (dp[i] != 0) { return dp[i]; }

    // recursive case
    ll take = 0, nottake = 0;
    take = m[i] * i + solve(m, i - 2, dp);
    nottake = solve(m, i - 1, dp);

    return dp[i] = max(take, nottake);
}

void solve()
{
    ll n;
    cin >> n;
    map<ll, ll> m;
    vector<pair<ll, ll>> v;
    ll mx = -1;
    fr(n)
    {
        ll temp;
        cin >> temp;
        m[temp]++;
    }
    for (auto x : m)
    {
        v.push_back(make_pair(x.first, x.second));
    }
    for (int i = 0; i < (int)v.size(); i++)
    {
        int pr = i - 1;
        while (pr >= 0 && v[pr].first + 1 == v[i].first) pr--;
        if (pr == -1) f[i] = 1LL * v[i].first * v[i].second;
        else f[i] = f[pr] + 1LL * v[i].first * v[i].second;
        if (i != 0)
            f[i] = max(f[i], f[i - 1]);
    }
    cout << f[(int)v.size() - 1] << '\n';
}



// vi dp(mx + 1, 0);
// solve(v, mx, dp);
// cout << "hell";
// cout << dp[mx];

int main()
{
    fast;
    ll t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
