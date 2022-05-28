// Aur Bhai Dekhne aagaye ;)
// Author: Abhijit Mishra
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
        ll n;
        cin >> n;
        ll x = 0, y = 0;
        if (n & 1 || n < 4 || n == 5)
        {
            cout << -1 << endl;
        }
        else if (n == 4)
        {
            cout << 1 << " " << 1;
            nl;
        }
        else
        {
            if (n % 4 == 0)
            {
                x = n / 4;
            }
            else if (n % 4 == 2)
            {
                x = (n - 6) / 4 + 1;
            }

            if (n % 6 == 0)
            {
                y = n / 6;
            }
            else if (n % 6 == 2)
            {
                y = (n - 8) / 6 + 2;
            }
            else if (n % 6 == 4)
            {
                y = (n - 4) / 6 + 1;
            }
            cout << y << " " << x;
            nl;
        }
    }
    return 0;
}
