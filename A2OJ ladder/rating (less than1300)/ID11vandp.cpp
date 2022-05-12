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

void findPrimes(int n, vi *a)
{
    fr(n)
    {
        bool k = true;
        for (ll j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                k = false;
            }
        }
        if (k)
        {
            a->pb(i);
        }
    }
}

int main()
{

    fast;
    ll n, m;
    bool c = true;
    cin >> n >> m;
    vi a;
    findPrimes(50, &a);
    // for (auto x : a)
    // {
    //     cout << x << " ";
    // }

    // for (auto x : a)
    // {
    //     if(x==n){

    //     }
    // }
    fr(a.size())
    {
        if (a[i] == n)
        {
            if (a[i + 1] == m)
            {
                cout << "YES" << endl;
                c = false;
            }
        }
    }
    if (c)
    {
        cout << "NO" << endl;
    }

    return 0;
}
