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
        vi a(n);
        ll ans = 0;
        ll times = 0;
        fr(n)
        {
            cin >> a[i];
            if (a[i] < i)
            {
                ans = -1;
            }
        }
        bool flag = false;
        if (!ans)
        {
            rfr(n - 1)
            {

                while (a[i + 1] <= a[i])
                {
                    a[i] = a[i] / 2;
                    times++;
                }

                if (a[i] < i)
                {
                    flag = true;
                    cout << -1;
                    nl;
                    break;
                }
            }
            if (!flag)
            {
                cout << times;
                nl;
            }
        }
        else
        {
            cout << ans;
            nl;
        }
    }
    return 0;
}