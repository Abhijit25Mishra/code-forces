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
        ll n, q;
        cin >> n >> q;
        vector<int> a(n);
        ll sum = 0;
        fr(n)
        {
            cin >> a[i];
            sum += a[i];
        }
        vi x(q);
        fr(q)
        {
            cin >> x[i];
        }
        sort(a.begin(), a.end());
        reverse(all(a));
        ll newsum = 0;
        fr(q)
        {

            if (x[i] > sum)
            {
                cout << -1 << endl;
            }
            else if (x[i] == sum)
            {
                cout << n << endl;
            }
            else if (x[i] < sum)
            {
                newsum = 0;
                rep(j, 0, n)
                {

                    if (newsum < x[i])
                    {
                        newsum += a[j];
                        if (j + 1 == n)
                        {
                            cout << j + 1 << endl;
                        }
                    }
                    else
                    {
                        cout << j << endl;
                        break;
                    }
                }
            }
        }
    }
    return 0;
}
