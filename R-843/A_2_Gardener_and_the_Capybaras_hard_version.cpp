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
    string s;
    cin >> s;
    ll n = s.length();
    string k = s.substr(0, 2);
    string x, y, z;
    if (k == "aa")
    {
        x = "a";
        y = "a";
        z = s.substr(2);
    }
    else if (k == "bb")
    {
        x = "b";
        y = "b";
        z = s.substr(2);
    }
    else if (k == "ab")
    {
        x = "a";
        for (int i = 1; i < n - 1; i++)
        {
            if (s[i + 1] > s[i])
            {
                y = s.substr(1, i);
                z = s.substr(i);
                break;
            }
        }
        y = s.substr(1, n - 2);
        z = s[n - 1];
    }
    else
    {
        x = "b";
        y = "a";
        z = s.substr(2);
    }

    cout << x << " " << y << " " << z;
    nl;


    // map<ll, char > k;
    // ll curr = -1;
    // fr(n)
    // {
    //     if (i == 0)
    //     {
    //         k[i] = s[i];
    //         curr = i;
    //         continue;
    //     }
    //     if (s[i] != k[curr])
    //     {
    //         k[i] = s[i];
    //         curr = i;
    //     }
    // }
    // string ab, bc, cd;
    // for (auto x : k)
    // {
    // }
    // nl;
    // ll l = 1, e = 2;
    // string x, y, z;
    // ll i = 0;
    // while (e != n)
    // {
    //     x = s.substr(0, l);
    //     y = s.substr(l, e - l);
    //     z = s.substr(e);
    //     e++;
    //     if (e % 3 == 0)
    //     {
    //         l++;
    //     }
    //     if ((x >= y && z >= y) || (x <= y && z <= y))
    //     {
    //         cout << x << " " << y << " " << z;
    //         nl;
    //         break;
    //     }
    // }
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
