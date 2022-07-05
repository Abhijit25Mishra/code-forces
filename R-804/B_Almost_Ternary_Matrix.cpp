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
        ll h, w;
        cin >> h >> w;
        ll a[h][w] = {0};
        ll cnt = 2, cnt2 = 2;

        a[0][0] = 1;

        for (ll i = 0; i < h; i++)
        {
            for (ll j = 0; j < w; j++)
            {
                if (j == 0 && i == 0)
                {
                }

                else
                {
                    if (j == 0)
                    {
                        if (cnt2 != 2)
                        {
                            a[i][0] = a[i - 1][0];
                            cnt2++;
                        }
                        else
                        {
                            a[i][0] = 1 - a[i - 1][0];
                            cnt2 = 1;
                        }
                        cnt = 2;
                    }
                    else
                    {
                        if (cnt != 2)
                        {
                            a[i][j] = a[i][j - 1];
                            cnt++;
                        }
                        else
                        {
                            a[i][j] = 1 - a[i][j - 1];
                            cnt = 1;
                        }
                    }
                }
            }
        }

        fr(h)
        {
            rep(j, 0, w)
            {
                cout << a[i][j] << " ";
            }
            nl;
        }
    }
    return 0;
}
