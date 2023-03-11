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

string compliment(string s)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '1')
        {
            s[i] = '0';
        }
        else
        {
            s[i] = '1';
        }
    }
    return s;
}


void solve()
{
    ll n;
    cin >> n;
    string s1, s2;
    cin >> s1 >> s2;
    string s3;
    bool ok = true;

    fr(n)
    {
        if (s1[i] == s2[i])
        {
            s3.pb('0');
        }
        else
        {
            s3.pb('1');
        }
    }

    if (s3.find('1') && s3.find('0'))
    {
        ok = false;
    }
    else
    {
        ok = true;
    }

    if (!ok)
    {
        cout << "NO";
        nl;
    }
    else
    {
        cout << "YES";
        nl;
        ll cnt = 0;
        ll l = -1, r = -1;
        vector<pair<ll, ll>> a;
        fr(n)
        {
            if (s1[i] == s1[i + 1] && s1[i] == '1')
            {
                if (l == -1)
                {
                    l = i + 1;
                }
                else
                {
                    r = i + 1;
                }
            }
            else if (l != -1)
            {
                if (r == -1)
                {
                    r = l;
                }
                a.pb(mp(l, r));
                l = -1;
                r = -1;

            }
            if (l != -1 && r == -1)
            {

            }
            if (s1[n - 1] == '1')
            {
                a.pb(mp(l, n));
            }


        }
        cout << a.size();
        nl;
        for (auto x : a)
        {
            cout << x.first << " " << x.second;
            nl;
        }
    }


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
