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
    ll t = 9;
    ll a[3][3];
    ll var;

    fr(3)
    {

        for (int j = 0; j < 3; j++)
        {
            cin >> a[i][j];
            if (a[i][j] % 2 == 0)
            {
                a[i][j] = 0;
            }
            else if (a[i][j] % 2 == 1)
            {
                a[i][j] = 1;
            }
        }
    }
    fr(3)
    {

        for (int j = 0; j < 3; j++)
        {
            var = a[i][j];
            if (i - 1 >= 0)
                var += a[i - 1][j];
            if (i + 1 <= 2)
                var += a[i + 1][j];
            if (j - 1 >= 0)
                var += a[i][j - 1];
            if (j + 1 <= 2)
                var += a[i][j + 1];

            cout << (var % 2 == 0) << "";
        }
        cout << endl;
    }
    return 0;
}
