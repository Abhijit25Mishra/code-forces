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

        ll rh, rs;
        cin >> rh >> rs;
        ll red, yell;
        cin >> red;
        vector<double> ptr;
        vector<double> pty;
        fr(red)
        {
            double x, y;
            cin >> x >> y;
            if (rh + rs >= double(sqrt(x * x + y * y)))
            {
                ptr.pb(sqrt(x * x + y * y));
            }
        }
        cin >> yell;
        fr(yell)
        {
            double x, y;
            cin >> x >> y;
            if (rh + rs >= double(sqrt(x * x + y * y)))
            {
                pty.pb(sqrt(x * x + y * y));
            }
        }
        sort(all(ptr));
        sort(all(pty));
        // while (ptr[ans] == pty[ans]) { ans++; }
        // if()

        if (ptr.size() == 0)
        {
            cout << "Case #" << testcasenumber << ": " << 0 << " " << pty.size();
        }
        else if (pty.size() == 0)
        {
            cout << "Case #" << testcasenumber << ": " << ptr.size() << " " << 0;
        }
        else if (ptr[0] > pty[0])
        {
            ll abc = 0;
            rep(i, 0, pty.size())
            {
                if (pty[i] < ptr[0])
                {
                    abc++;
                }
            }
            cout << "Case #" << testcasenumber << ": " << 0 << " " << abc;
        }
        else  if (pty[0] > ptr[0])
        {
            ll abc = 0;
            rep(i, 0, ptr.size())
            {
                if (ptr[i] < pty[0])
                {
                    abc++;
                }
            }
            cout << "Case #" << testcasenumber << ": " << abc << " " << 0;

        }
        // bool ok = true;
        // cout << "Case #" << testcasenumber << ": " << ptr << " " << pty;
        nl;
    }
    return 0;
}
