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
    int a[3000];
    int z = 0;
    for (int i = 1; i < 3000; i++)
    {

        if (i % 10 != 3 && i % 3 != 0)
        {
            a[z] = i;
            z++;
        }
    }
    // fr(1000) { cout << a[i] << endl; }
    ll t = 1;
    cin >> t;
    while (t--)
    {
        int k;
        cin >> k;
        cout << a[k - 1] << endl;
    }
    return 0;
}
