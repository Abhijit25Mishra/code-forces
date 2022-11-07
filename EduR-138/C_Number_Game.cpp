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
    ll t = 1;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        deque<ll> a(n);
        fr(n)
        {
            cin >> a[i];
        }

        sort(all(a));
        // fr(n)
        // {
        //     cout << a[i] << " ";
        // }
        vi x(50);
        ll ans = 0;
        ll k = 50;
        fr(k)
        {
            deque<ll> b(n);
            fr(n)
            {
                b[i] = a[i];
            }
            ll lol = 0;
            while (!b.empty())
            {
                if (b.back() > i)
                {
                    b.pop_back();
                }
                else if (b.front() <= i)
                {
                    b.pop_front();
                    if (!b.empty())
                    {
                        b.pop_back();
                    }
                    lol++;
                }
            }
            if (lol == i)
            {
                ans = max(lol, ans);
                x[i] = 1;
            }
        }
        ans = 0;
        rep(i, 1, 50)
        {
            if (x[i] != 1)
            {
                ans = i;
                break;
            }
        }
        cout << ans;





        // if (n == 1)
        // {
        //     ll x;
        //     cin >> x;
        //     if (x == 1)
        //     {
        //         cout << 1;

        //     }
        //     else
        //     {
        //         cout << 0;
        //     }
        //     nl;
        // }
        // else
        // {
        //     vi a(n);
        //     vi b(105, 0);
        //     fr(n)
        //     {
        //         cin >> a[i];
        //         b[a[i]]++;
        //     }
        //     vi c(105, 0);
        //     fr(105)
        //     {
        //         if (i == 0) {}
        //         else
        //         {
        //             c[i] = b[i] + c[i - 1];
        //         }
        //     }
        //     ll ans = 0;
        //     rep(i, 1, n)
        //     {

        //         if (c[i] >= i * 2)
        //         {
        //             ans++;
        //         }
        //         else if (c[i] - c[i - 1] == 1)
        //         {
        //             ans++;
        //             break;
        //         }
        //     }
        //     cout << ans;
        //     nl;
    }


    return 0;
}
