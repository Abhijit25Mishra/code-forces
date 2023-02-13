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


// ll summ(ll n)
// {
//     if (n <= 0) { return 0; }
//     return ((n * (n + 1)) / 2);
// }

// ll mex(vector<ll> &a, ll aa)
// {
//     if (a[aa] == 0)
//     {
//         return aa;
//     }
//     else
//     {
//         while (a[aa] != 0)
//         {
//             aa++;
//         }
//         return aa;
//     }
// }

void solve()
{
    ll n;
    cin >> n;
    vi a(n), b(n), inva(n), invb(n);
    fr(n)
    {
        cin >> a[i];
        a[i]--;
        inva[a[i]] = i;
    }
    fr(n)
    {
        cin >> b[i];
        b[i]--;
        invb[b[i]] = i;
    }
    ll maxl = n;
    ll minr = -1;
    ll ans = 0;
    for (int mex = 1; mex <= n; mex++)
    {
        maxl = min(maxl, inva[mex - 1]);
        minr = max(minr, inva[mex - 1]);
        maxl = min(maxl, invb[mex - 1]);
        minr = max(minr, invb[mex - 1]);

        ll minl = 0;
        ll maxr = n - 1;

        if (mex < n)
        {
            if (inva[mex] < maxl)
            {
                minl = max(minl, inva[mex] + 1);
            }
            else
            {
                maxr = min(maxr, inva[mex] - 1);
            }
            if (invb[mex] < maxl)
            {
                minl = max(minl, invb[mex] + 1);
            }
            else
            {
                maxr = min(maxr, invb[mex] - 1);
            }

        }
        if (minl <= maxl && minr <= maxr)
        {
            ans += 1LL * (maxl - minl + 1) * (maxr - minr + 1);
        }
    }
    int lenl = min(inva[0], invb[0]);
    int lenr = min(n - 1 - inva[0], n - 1 - invb[0]);
    int lenm = abs(inva[0] - invb[0]) - 1;
    ans += 1LL * lenl * (lenl + 1) / 2;
    ans += 1LL * lenr * (lenr + 1) / 2;
    ans += 1LL * lenm * (lenm + 1) / 2;
    cout << ans << "\n";

    // ll n;
    // cin >> n;
    // vi a(n), b(n);
    // cin >> a;
    // cin >> b;
    // ll ans = 0;
    // ll onea, oneb;
    // fr(n)
    // {
    //     if (a[i] == 1) { onea = i; }
    //     if (b[i] == 1) { oneb = i; }
    // }
    // ans = summ(min(onea, oneb)) + summ(n - 1 - max(onea, oneb)) + summ(max(onea, oneb) - min(onea, oneb) - 1);

    // ll l = min(onea, oneb);
    // ll r = max(onea, oneb);

    // vi x(n + 1), y(n + 1);
    // rep(i, l, r + 1)
    // {
    //     x[a[i]]++;
    //     y[b[i]]++;
    // }
    // vi xxx = x;
    // vi yyy = y;
    // ll xx = 1, yy = 1;
    // xx = mex(x, xx);
    // yy = mex(y, yy);
    // // cout << "Hel";
    // // cout << xx << " " << yy;
    // // nl;
    // ll lreal = l;
    // ll rreal = r;
    // while (l != 0)
    // {
    //     if (mex(x, xx) == mex(y, yy)) { ans++; }
    //     l--;
    //     x[a[l]]++;
    //     y[b[l]]++;
    // }
    // l = lreal;
    // r = rreal;

    // while (r != n - 1)
    // {
    //     if (mex(xxx, xx) == mex(yyy, yy)) { ans++; }
    //     r++;
    //     x[a[r]]++;
    //     y[b[r]]++;
    // }


}
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
