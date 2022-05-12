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

int main()
{
    fast;
    ll t = 1;
    cin >> t;
    while (t--)
    {
        ll x = 0, n = 0;
        cin >> x >> n;
        if (n % 4 == 0)
        {
            cout << x << endl;
        }
        else if (n % 4 == 1)
        {
            if (x % 2 == 0)
            {
                cout << x - n << endl;
            }
            else
            {
                cout << x + n << endl;
            }
        }
        else if (n % 4 == 2)
        {
            if (x % 2 == 0)
            {
                cout << x + 1 << endl;
            }
            else
            {
                cout << x - 1 << endl;
            }
        }
        else
        {
            if (x % 2 == 0)
            {
                cout << x + n + 1 << endl;
            }
            else
            {
                cout << x - n - 1 << endl;
            }
        }

        // if ((abs(n) * 2) > abs(x))
        // {
        //     if (x % 2 == 0)
        //     {
        //         if (n % 2 == 0)
        //         {
        //             cout << x + (n / 2) << endl;
        //         }
        //         else
        //         {
        //             cout << x - ((n + 1) / 2) << endl;
        //         }
        //     }
        //     else
        //     {
        //         if (n % 2 == 0)
        //         {
        //             cout << x - (n / 2) << endl;
        //         }
        //         else
        //         {
        //             cout << x + ((n + 1) / 2) << endl;
        //         }
        //     }
        // }
        // else
        // {
        //     ll ctr = n - (2 * abs(x));
        //     ll ab = ctr / 4;
        //     if (ctr % 4 == 0)
        //     {
        //         cout << 0 << endl;
        //     }
        //     else if (ctr % 4 == 1)
        //     {
        //         cout << -n << endl;
        //     }
        //     else if (ctr % 4 == 2)
        //     {
        //         cout << 1 << endl;
        //     }
        //     else
        //     {
        //         cout << n << endl;
        //     }
        // }

        // if (abs(x) % 2 == 0)
        // {
        //     x -= (i + 1);
        // }
        // else
        // {
        //     x += (i + 1);
        // }
    }
    return 0;
}
