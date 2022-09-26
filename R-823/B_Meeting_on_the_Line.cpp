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


int main()
{
    fast;
    ll t = 1;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vi x(n), t(n);
        ll mx = INT64_MIN, mi = INT64_MAX;
        // vector<pair<double, double>> f;
        fr(n) { cin >> x[i]; }
        fr(n) { cin >> t[i]; }
        map<ll, ll> m;
        fr(n)
        {
            m[x[i]] = max(m[x[i]], t[i]);
        }
        if (n == 1) { cout << x[0]; }
        else
        {
            for (auto kk : m)
            {
                mx = max(mx, kk.first - kk.second);
                mx = max(mx, kk.first + kk.second);
                mi = min(mi, kk.first - kk.second);
                mi = min(mi, kk.first + kk.second);
            }
            // cout << mx << " " << mi;
            // nl; nl;
            ll ans = mx + mi;
            cout << double(ans) / 2;
            // fr(n) { f.pb(mp(x[i], t[i])); }
            // last
            // fr(n)
            // {
            //     cout << f[i].first << " " << f[i].second;
            //     nl;
            // }
            // sort(all(f));
            // double mxx = f[n - 1].first;
            // double txx = f[n - 1].second;
            // double ans = -1;
            // double ans2 = INT64_MAX;
            // fr(n - 1)
            // {
            //     ans = max(ans, ((mxx + f[i].first) + (txx - f[i].second)) / 2);
            //     ans2 = min(ans2, ((mxx + f[i].first) + (txx - f[i].second)) / 2);
            //     // cout << ans << " ";
            // }
            // double mii = f[0].first;
            // double tii = f[0].second;
            // rep(i, 1, n)
            // {
            //     ans = max(ans, ((f[i].first - mii) + (f[i].second - tii)) / 2);
            //     ans2 = min(ans2, ((mxx + f[i].first) + (txx - f[i].second)) / 2);
            // }

            // double trueans = min(ans, ans2), tem = INT64_MAX, tem2;
            // // cout << ans << " " << ans2;
            // // nl;
            // cout << min(ans, ans2);

            // for (double i = ans; i <= ans2; i = i + (1 / 2))
            // {
            //     for (int j = 0; j < n; j++)
            //     {
            //         if (f[j].first > i)
            //             tem = min(tem, (f[j].first - i) + f[j].second);
            //         else
            //         {
            //             tem = min(tem, i - f[j].first + f[j].second);
            //         }

            //         if (trueans > tem)
            //         {
            //             trueans = tem;
            //             tem2 = i;
            //         }
            //         // trueans = min(tem, trueans);

            //     }
            // }
            // cout << tem2; nl;

            // cout << ans << " " << ans2;
        }
        nl;
    }
    return 0;
}
