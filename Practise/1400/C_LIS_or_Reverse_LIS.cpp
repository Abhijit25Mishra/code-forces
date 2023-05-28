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
    map<ll, ll> m;

    fr(n)
    {
        m[a[i]]++;
    }
    ll ans = 0;

    // 4 3 

    vector<ll> rep;
    deque<ll> sin;
    for (auto i : m)
    {
        if (i.second >= 2)
        {
            ans += 1;
            rep.pb(i.first);
        }
        else if (i.second == 1)
        {
            sin.pb(i.first);
        }
    }

    ans = rep.size() + (sin.size() + 1) / 2;
    // sort(all(rep));
    // sort(all(sin));



    // if (!rep.empty())
    // {
    //     ll mi = 0, mx = 0;

    //     fr(sin.size())
    //     {
    //         if (sin[i] > rep[0]) { mx++; }
    //         else if (sin[i] < rep[rep.size() - 1]) { mi++; }
    //     }
    //     bool kkk = false;
    //     if (mx > mi)
    //     {
    //         mx--;
    //         ans++;
    //         kkk = false;
    //     }
    //     else
    //     {
    //         mi--;
    //         ans++;
    //         kkk = true;
    //     }

    //     ll minn = min(mx, mi);
    //     ans += minn;
    //     mx -= minn;
    //     mi -= minn;

    //     if (mx != 0)
    //     {
    //         ans += mx / 2;
    //     }
    //     else if (mi != 0)
    //     {
    //         ans += mi / 2;
    //     }

    // }
    // else
    // {
    //     ans = sin.size() + 1;
    //     ans /= 2;
    // }
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
