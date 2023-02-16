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
    ll n, s;
    cin >> n >> s;
    if (n == 1 && s == 0) { cout << "0 0"; return; }
    if ((n * 9) < s || 0 >= s) { cout << -1 << " " << -1 << endl; }
    else
    {
        vi ans(n, 0);
        ll sum = 0;
        ll i = 0;
        while (sum != s)
        {
            if (s - sum > 9)
            {
                ans[i] += 9;
                sum += 9;
                i++;
            }
            else
            {
                ans[i] += s - sum;
                break;
            }
        }
        vi ans2(n, 9);
        ll sum2 = n * 9;
        i = 0;
        while (sum2 != s)
        {
            if (i == 0)
            {
                if (sum2 - s > 8)
                {
                    ans2[i] -= 8;
                    sum2 -= 8;
                    i++;
                }
                else
                {
                    ans2[i] -= sum2 - s;
                    break;
                }
            }
            else
            {
                if (sum2 - s > 9)
                {
                    ans2[i] -= 9;
                    sum2 -= 9;
                    i++;
                }
                else
                {
                    ans2[i] -= sum2 - s;
                    break;
                }
            }
        }
        fr(n)
        {
            cout << ans2[i];
        }
        cout << " ";
        fr(n)
        {
            cout << ans[i];
        }
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
