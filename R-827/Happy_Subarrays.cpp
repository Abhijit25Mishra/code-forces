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
    ll t;
    cin >> t;
    rep(testcasenumber, 1, t + 1)
    {
        ll ans = 0;
        ll n;
        cin >> n;
        vi a(n);
        vi pre(n);
        fr(n)
        {
            ll temp;
            cin >> temp;
            if (temp != 0) { a.pb(temp); }
        }
        rep(i, 0, n)
        {
            vi x(n + 1);
            rep(j, i, n)
            {
                if (j == i)
                {
                    if (a[j] < 0) { break; }
                    x[j - i] = a[j];
                    ans += a[j];
                }
                else
                {
                    x[j - i] = x[j - i - 1] + a[j];
                    if (x[j - i] >= 0) { ans += x[j - i]; }
                    else { break; }
                }
            }
        }
        cout << "Case #" << testcasenumber << ": " << ans;
        nl;
    }
    return 0;
}
