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
        vi a(n);
        fr(n) { cin >> a[i]; }

        sort(all(a));
        vi b(n - 1);
        ll sum = 0;
        fr(n - 1)
        {
            b[i] = a[i + 1] - a[i];
            sum += b[i];
        }
        ll mx = 0;
        ll curr = 0;
        ll mxb = 0;
        fr(n - 1)
        {
            mx = max(b[i] - curr, mx);
            curr += b[i];
        }

        curr = 0;
        rfr(n - 1)
        {
            mxb = max(b[i] - curr, mxb);
            curr += b[i];
        }
        ll ans = sum + max(mx, mxb);
        cout << ans;
        nl;


        // ll mx1 = -1, mx2 = -1, mi1 = INT64_MAX, mi2 = INT64_MAX;
        // rep(i, 0, n)
        // {
        //     cin >> a[i];
        //     if (mx1 < a[i])
        //     {
        //         mx2 = mx1;
        //         mx1 = a[i];
        //     }
        //     else if (mx2 < a[i])
        //     {
        //         mx2 = a[i];
        //     }

        //     if (mi1 > a[i])
        //     {
        //         mi2 = mi1;
        //         mi1 = a[i];
        //     }
        //     else if (mi2 > a[i])
        //     {
        //         mi2 = a[i];
        //     }
        // }
        // // mx1>mx2>mi2>mi1
        // // cout << mx1 << " " << mx2 << " " << mi2 << " " << mi1;
        // // nl;
        // ll ans = mx1 - mi1 + (max(mx1 - mx2, mi2 - mi1));
        // cout << ans;
        // nl;


    }
    return 0;
}
