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
    ll n;
    cin >> n;
    ll a[n], c = 0, b = 0;
    fr(n)
    {
        cin >> a[i];
        if (a[i] == 5)
        {
            c++;
        }
        else
        {
            b++;
        }
    }
    ll k = c / 9;
    if (b == 0)
    {
        cout << -1;
        return 0;
    }
    if (k == 0 && b == 0)
    {
        cout << -1;
        return 0;
    }
    fr(k * 9)
    {
        cout << 5;
    }
    if (k > 0)
    {
        fr(b) { cout << 0; }
    }
    else
    {
        cout << 0;
    }
    return 0;
}
