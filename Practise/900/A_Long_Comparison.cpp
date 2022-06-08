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
        ll x1, p1, x2, p2;
        cin >> x1 >> p1 >> x2 >> p2;

        ll mi = min(p1, p2);
        p1 -= mi;
        p2 -= mi;
        if (p1 >= 7)
        {
            cout << ">";
            nl;
        }
        else if (p2 >= 7)
        {
            cout << "<";
            nl;
        }
        else
        {
            fr(p1) { x1 *= 10; }
            fr(p2) { x2 *= 10; }
            if (x1 > x2)
            {
                cout << ">";
                nl;
            }
            else if (x2 > x1)
            {
                cout << "<";
                nl;
            }
            else
            {
                cout << "=";
                nl;
            }
        }

        // while (x1 % 10 != x1)
        // {
        //     x1 = x1 / 10;
        //     p1++;
        // }
        // while (x2 % 10 != x2)
        // {
        //     x2 = x2 / 10;
        //     p2++;
        // }
        // if (p1 > p2)
        // {
        //     cout << ">";
        //     nl;
        // }
        // else if (p2 > p1)
        // {
        //     cout << "<";
        //     nl;
        // }
        // else
        // {
        //     if (x1 == x2)
        //     {
        //         cout << "=";
        //         nl;
        //     }
        //     else if (x1 > x2)
        //     {
        //         cout << ">";
        //         nl;
        //     }
        //     else
        //     {
        //         cout << "<";
        //         nl;
        //     }
        // }

        // double diff = 0;
        // double xx1 = log10(x1);
        // double xx2 = log10(x2);
        // if (x1 == 0 || x2 == 0)
        // {
        //     if (x1 == 0 && x2 != 0)
        //     {
        //         cout << "<";
        //         nl;
        //     }
        //     else if (x1 != 0 && x2 == 0)
        //     {
        //         cout << ">";
        //         nl;
        //     }
        //     else
        //     {
        //         cout << "=";
        //         nl;
        //     }
        // }
        // if (p1 == p2 && x1 == x2)
        // {
        //     cout << "=";
        //     nl;
        // }
        // else
        // {

        //     xx1 += p1;
        //     xx2 += p2;
        //     diff = xx1 - xx2;
        //     if (diff == 0)
        //     {
        //         cout << "=";
        //         nl;
        //     }
        //     else if (diff > 0)
        //     {
        //         cout << ">";
        //         nl;
        //     }
        //     else
        //     {
        //         cout << "<";
        //         nl;
        //     }
        // }
    }
    return 0;
}
