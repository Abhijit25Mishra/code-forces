// // Aur Bhai Dekhne aagaye ;)
// // Author: Abhijit Mishra 
// #pragma GCC optimize("Ofast")
// #pragma GCC optimize("no-stack-protector")
// #pragma GCC optimize("unroll-loops")
// #pragma GCC target("sse,sse2,sse3,ssse3,popcnt,abm,mmx,tune=native")
// #pragma GCC optimize("fast-math")
// #pragma GCC optimize("Ofast")
// #pragma GCC optimize("unroll-loops")
// #pragma GCC target("avx,avx2,fma")
// #include <bits/stdc++.h>
// using namespace std;
// template<typename typC> istream &operator>>(istream &cin, vector<typC> &a) { for (auto &x : a) cin >> x; return cin; }
// template<typename typC> ostream &operator<<(ostream &cout, const vector<typC> &a) { int n = a.size(); if (!n) return cout; cout << a[0]; for (int i = 1; i < n; i++) cout << ' ' << a[i]; return cout; }
// #define pi (3.141592653589)
// #define mod 1000000007
// #define pb push_back
// #define is insert
// #define mp make_pair
// #define ff first
// #define ss second
// #define all(x) x.begin(), x.end()
// #define min3(a, b, c) min(c, min(a, b))
// #define min4(a, b, c, d) min(d, min(c, min(a, b)))
// #define rfr(n) for(int i=n-1;i>=0;i--)
// #define rep1(i,a,b) for(long long i=a;i<=b;i++)
// #define fr(n) for(long long i=0;i<n;i++)
// #define nesfr(x,y) for(long long i=0;i<x;i++)for(long long j=0;j<y;j++)
// #define rep(i,a,b) for(long long i=a;i<b;i++)
// #define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
// typedef long long int ll;
// typedef long double ld;
// typedef vector<ll> vi;
// #define nl cout << "\n"
// const unsigned int M = 1000000007;
// const int  N = 2e5 + 5;



// void solve()
// {
//     ll n;
//     cin >> n;
//     vector<pair<ll, ll>> a;
//     multiset<ll> s;

//     fr(n)
//     {
//         ll x, y;
//         cin >> x >> y;
//         a.pb(mp(x, y));
//     }

//     sort(all(a));
//     fr(n)
//     {
//         s.insert(a[i].second);
//     }

//     ll ans = INT32_MAX;
//     ll mx = -INT32_MAX;
//     reverse(all(a));
//     fr(n)
//     {
//         s.erase(s.find(a[i].second));
//         ans = min(ans, abs(a[i].second - mx));
//         if (!s.empty())
//         {
//             auto it = s.lower_bound(a[i].first);
//             if (it != s.end())
//             {
//                 ans = min(ans, abs(a[i].first - max(mx, *it)));
//             }
//             if (it != s.begin())
//             {
//                 ans = min(ans, abs(a[i].first - max(mx, *prev(it))));
//             }
//         }
//         mx = max(mx, a[i].second);

//     }

//     cout << ans;
//     nl;

// }
// int main()
// {
//     fast;
//     ll t = 1;
//     cin >> t;
//     while (t--)
//     {
//         solve();
//     }
//     return 0;
// }



#include <bits/stdc++.h>

using namespace std;

#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n;
        cin >> n;
        vector<pair<int, int>> p(n);
        for (int i = 0; i < n; i++)
        {
            cin >> p[i].first >> p[i].second;
        }
        sort(p.begin(), p.end());
        multiset<int> s;
        for (int i = 0; i < n; i++)
        {
            s.insert(p[i].second);
        }
        const int inf = (int)1.01e9;
        int ans = inf;
        int mx = -inf;
        for (int i = n - 1; i >= 0; i--)
        {
            s.erase(s.find(p[i].second));
            ans = min(ans, abs(p[i].first - mx));
            if (!s.empty())
            {
                auto it = s.lower_bound(p[i].first);
                if (it != s.end())
                {
                    ans = min(ans, abs(p[i].first - max(mx, *it)));
                }
                if (it != s.begin())
                {
                    ans = min(ans, abs(p[i].first - max(mx, *prev(it))));
                }
            }
            mx = max(mx, p[i].second);
        }
        cout << ans << '\n';
    }
    return 0;
}
