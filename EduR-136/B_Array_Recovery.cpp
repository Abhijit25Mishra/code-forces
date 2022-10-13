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

// bool solve(vi a, ll i, ll val, vi ans)
// {
//     // base case
//     if (i == a.size() - 1)
//     {
//         for(auto )
//         return true;
//     }

//     // recur case
//     ll x, y;
//     x = val + a[i];
//     y = val - a[i];
//     ans.pb(x);
//     bool xx = solve(a, i + 1, x, ans);
//     ans.pop_back();
//     ans.pb(y);
//     bool yy = solve(a, i + 1, y, ans);
//     return xx || yy;
// }

int main()
{
    fast;
    ll t = 1;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vi a(n);
        fr(n) { cin >> a[i]; }
        vi ans(n);
        bool ok = true;
        fr(n)
        {
            if (i == 0)
            {
                ans[i] = a[i];
            }
            else if (a[i] == 0)
            {
                ans[i] = ans[i - 1];
            }
            else
            {
                if (a[i] + ans[i - 1] >= 0 && ans[i - 1] - a[i] < 0)
                {
                    ans[i] = ans[i - 1] + a[i];
                }
                else
                {
                    cout << -1;
                    ok = false; break;
                }
            }
        }
        if (ok)
        {
            fr(n)
            {
                cout << ans[i] << " ";
            }

        }
        nl;


    }
    return 0;
}
