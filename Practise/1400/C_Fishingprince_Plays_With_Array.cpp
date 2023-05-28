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

    ll n, m, k;
    cin >> n >> k;
    deque<ll> a(n);
    fr(n)
    {
        cin >> a[i];
    }
    cin >> m;
    deque<ll> b(m);
    fr(m)
    {
        cin >> b[i];
    }

    ll aa = accumulate(all(a), 0ll);
    ll bb = accumulate(all(b), 0ll);
    if (aa != bb)
    {
        cout << "No";
    }
    else
    {
        bool ok = true;
        vector<pair<ll, ll>> x, y;// val , cnt
        fr(n)
        {
            if (a[i] % k != 0)
            {
                x.push_back(mp(a[i], 1));
            }
            else
            {
                ll j = 0;
                while (a[i] % k == 0)
                {
                    j++;
                    a[i] /= k;
                }
                x.push_back(mp(a[i], pow(k, j)));
            }
        }
        fr(m)
        {
            if (b[i] % k != 0)
            {
                y.push_back(mp(b[i], 1));
            }
            else
            {
                ll j = 0;
                while (b[i] % k == 0)
                {
                    j++;
                    b[i] /= k;
                }
                y.push_back(mp(b[i], pow(k, j)));
            }
        }

        ll suma = x[0].second, sumb = y[0].second;
        vector<pair<ll, ll>> fina, finb;
        fr(x.size() - 1)
        {
            if (x[i].first == x[i + 1].first)
            {
                suma += x[i + 1].second;
            }
            else
            {
                fina.pb(mp(x[i].first, suma));
                suma = x[i + 1].second;
            }
        }
        fina.pb(mp(x.back().first, suma));

        fr(y.size() - 1)
        {
            if (y[i].first == y[i + 1].first)
            {
                sumb += y[i + 1].second;
            }
            else
            {
                finb.pb(mp(y[i].first, sumb));
                sumb = y[i + 1].second;
            }
        }
        finb.pb(mp(y.back().first, sumb));


        if (fina == finb)
        {
            cout << "Yes";
        }
        else
        {
            cout << "No";
        }


    }
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
