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
    ll n;
    cin >> n;
    vi a(n);
    cin >> a;
    vi pos(n + 1);
    fr(n)
    {
        pos[a[i]] = i;
    }
    // vi x(n);
    // rep(i, n / 2 + n % 2, n)
    // {
    //     if (a[i] > n / 2 + n % 2)
    //     {
    //         x[i] = n - a[i];
    //     }
    //     else
    //     {
    //         x[i] = a[i];
    //     }
    // }
    // rep(i, 0, n / 2)
    // {
    //     x[i] = a[i] - (i + 1);
    // }

    // if (n % 2)
    // {
    //     x[n / 2 + n % 2] = 0;
    // }
    // fr(n)
    // {
    //     x[i] %= n / 2;
    // }
    // ll ans = -1;
    // fr(n)
    // {
    //     ans = max(x[i], ans);
    // }

    // cout << ans;
    // nl;
    ll high = (n + 2) / 2;
    ll low = (n + 1) / 2;
    while (low > 0 && (high == low || (pos[low] < pos[low + 1] && pos[high - 1] < pos[high])))
    {
        low--; 2
            high++;
    }
    cout << (n - high + low + 1) / 2;
    nl;
    // ll high = n / 2 + n % 2;
    // ll low = n / 2 - 1 + n % 2;
    // ll k = 1;
    // while (k > 0 && high < n)
    // {
    //     k = lower_bound(all(a), high + 1) - lower_bound(all(a), high);
    //     high++;
    // }
    // while (k > 0 && low > 0)
    // {
    //     k = lower_bound(all(a), low) - lower_bound(all(a), low - 1);
    //     low--;
    // }
    // // cout << high << " " << low << endl;
    // if (high != n)
    // {
    //     high--;
    // }
    // if (low != 0 && low != 1)
    // {
    //     low++;
    // }
    // cout << min(n / 2, max(n - high, low));
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
