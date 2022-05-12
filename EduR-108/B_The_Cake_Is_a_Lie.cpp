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
        ll n, m, k;
        cin >> n >> m >> k;

        if (n * m - 1 == k)
            cout << "YES\n";
        else
            cout << "NO\n";
        }
    return 0;
}
// if ((x == 1 || y == 1) && (x != y))
// {
//     (k == max(x, y) - 1) ? cout << "YES\n" : cout << "NO\n";
// }
// else if (x > y && y != 1)
// {
//     ma = (x - 1) + (x * (y - 1));
//     mi = (((y + 1) * y) / 2) + y * (x - y);
//     (k <= ma && k >= mi) ? cout << "YES\n" : cout << "NO\n";
// }
// else if (y > x && x != 1)
// {
//     ma = (y - 1) + (y * (x - 1));
//     mi = (((x + 1) * x) / 2) + x * (y - x);
//     (k <= ma && k >= mi) ? cout << "YES\n" : cout << "NO\n";
// }
// else if (x == y && x > 1)
// {
//     (k == (((x + 1) * x) / 2)) ? cout << "YES\n" : cout << "NO\n";
// }
// else if (x == y && x == 1 && k == 0)
// {
//     cout << "YES\n";
// }
// else
// {
//     cout << "NO\n";
// }