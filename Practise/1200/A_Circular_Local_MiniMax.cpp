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
#define rfr(n) for (int i = n - 1; i >= 0; i--)
#define rep1(i, a, b) for (long long i = a; i <= b; i++)
#define fr(n) for (long long i = 0; i < n; i++)
#define nesfr(x, y)                   \
    for (long long i = 0; i < x; i++) \
        for (long long j = 0; j < y; j++)
#define rep(i, a, b) for (long long i = a; i < b; i++)
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
typedef long long int ll;
typedef long double ld;
typedef vector<ll> vi;
#define nl cout << "\n"
const unsigned int M = 1000000007;
const int N = 2e5 + 5;

int main()
{
    fast;
    ll t = 1;
    cin >> t;
    while (t--)
    {
        ll n;

        cin >> n;

        vector<ll> v;

        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            v.pb(x);
        }

        sort(v.begin(), v.end());

        if (n % 2 == 1)
        {
            cout << "NO" << endl;
            continue;
        }

        vector<ll> a, b;

        for (ll i = 0; i < n; i++)
        {
            if (i < n / 2)
            {
                a.pb(v[i]);
            }
            else
            {
                b.pb(v[i]);
            }
        }

        ll flag = 0;

        vector<ll> ans;

        for (ll i = 0; i < n / 2; i++)
        {
            ans.pb(a[i]);

            ans.pb(b[i]);
        }

        // for(ll i=0;i<ans.size();i++)
        // {
        // cout<<ans[i]<<" hh";
        // }

        // cout<<endl;

        for (ll i = 1; i < ans.size() - 1; i++)
        {
            if ((ans[i] > ans[i + 1] && ans[i] > ans[i - 1]) || (ans[i] < ans[i + 1] && ans[i] < ans[i - 1]))
            {
                // continue;

                // cout<<ans[i]<<" kk";
            }
            else
            {

                flag = 1;
                break;
            }
        }

        if (flag == 0)
        {

            cout << "YES" << endl;

            for (ll i = 0; i < n / 2; i++)
            {
                cout << a[i] << " " << b[i] << " ";
            }
            cout << endl;
        }
        else
            cout << "NO" << endl;
    }

    // while (t--)
    // {
    //     ll n;
    //     cin >> n;
    //     ll x = n / 2;
    //     deque<ll> a(n);
    //     map<ll, ll> m;
    //     fr(n)
    //     {
    //         cin >> a[i];
    //     }
    //     sort(all(a));
    //     ll ma = 0;
    //     ll val = 0;
    //     fr(n)
    //     {
    //         if (m.find(a[i]) == m.end())
    //         {
    //             m.insert(make_pair(a[i], 1));
    //         }
    //         else
    //         {
    //             m[a[i]]++;
    //         }
    //         if (m[a[i]] > ma)
    //         {
    //             ma = m[a[i]];
    //             val = a[i];
    //         }
    //     }

    // if (ma > x || n & 1)
    // {
    //     cout << "NO";
    //     nl;
    // }
    // if (x == ma)
    // {
    //     if (val != a[0] && val != a[n - 1])
    //     {
    //         cout << "NO";
    //         nl;
    //     }
    // }
    // else
    // {
    //     cout << "YES";
    //     nl;
    //     fr(n)
    //     {
    //         if (i & 1)
    //         {
    //             cout << a[i / 2] << " ";
    //         }
    //         else
    //         {
    //             cout << a[n / 2 + i / 2] << " ";
    //         }
    //     }
    //     nl;
    // }

    return 0;
}
