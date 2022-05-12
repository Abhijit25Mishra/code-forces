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
        ll a, b, c;
        cin >> a >> b >> c;
        ll n = abs(a - b);
        // greater of a or b /2 is must be greater than n-2
        ll larg = (a > b) ? a : b;
        // if ((larg / 2) > (n - 1))
        // {
        //     cout << -1 << endl;
        // }
        if (c > 2 * n || a > 2 * n || b > 2 * n)
        {
            // cout << c << " " << n << endl;
            cout << -1 << endl;
        }
        else
        {
            if ((c + n) % (n * 2) != 0)
            {
                cout << (c + n) % (n * 2) << endl;
            }
            else
            {
                cout << 2 * n << endl;
            }
        }
    }
    return 0;
}
