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
    bool flag = false;
    if (s.find('0') < s.length())
    {
        cout << "YES";
        nl;
        cout << 0;
        nl;
    }
    else if (s.find('8') < s.length())
    {
        cout << "YES";
        nl;
        cout << 8;
        nl;
    }
    else if (s.find('2') > s.length() && s.find('4') > s.length() && s.find('6') > s.length())
    {
        cout << "NO";
        nl;
    }
    else
    {
        for (int i = 0; i < s.length() - 1; i++)
        {
            for (int j = i + 1; j < s.length(); j++)
            {
                ll x = (s[i] - '0') * 10 + (s[j] - '0');
                if (x % 8 == 0)
                {
                    cout << "YES";
                    nl;
                    cout << s[i] << s[j];
                    nl;
                    flag = true;
                }
                if (flag) { break; }
            }
            if (flag) { break; }
        }
        if (!flag)
        {
            for (int i = 0; i < s.length() - 2; i++)
            {
                for (int j = i + 1; j < s.length() - 1; j++)
                {
                    for (int k = j + 1; k < s.length(); k++)
                    {
                        ll x = (s[i] - '0') * 100 + (s[j] - '0') * 10 + (s[k] - '0');
                        if (x % 8 == 0)
                        {
                            cout << "YES";
                            nl;
                            cout << s[i] << s[j] << s[k];
                            flag = true;
                        }
                        if (flag) { break; }
                    }

                    if (flag) { break; }
                }
                if (flag) { break; }
            }
        }
        if (!flag) { cout << "NO"; nl; }
    }


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
