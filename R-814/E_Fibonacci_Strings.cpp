// Aur Bhai Dekhne aagaye ;)
// Author: Abhijit Mishra
#pragma GCC optimize("Ofast")
#pragma GCC optimize("no-stack-protector")
#pragma GCC optimize("unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,popcnt,abm,mmx,tune=native")
#pragma GCC optimize("fast-math")
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#pragma GCC target("avx,avx2,fma")
#include <bits/stdc++.h>
using namespace std;
#define pi (3.141592653589)
#define mod 1000000007
#define pb push_back
#define is insert
#define mp make_pair
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

ll n, arr[101], s[45], f[45];

bool solve(ll x, ll last)
{
    if (x == -1)
    {
        return true;
    }
    bool can = false;
    fr(n)
    {
        if (arr[i] < f[x])
        {
            continue;
        }
        if (i == last)
        {
            continue;
        }
        arr[i] -= f[x];
        can |= solve(x - 1, i);
        if (can)
            break;
        arr[i] += f[x];
    }
    return can;
}

vector<ll> builtFibSeq()
{
    vi x;
    x.pb(1);
    x.pb(1);
    fr(51)
    {
        x.pb(x[i] + x[i + 1]);
    }

    return x;
}

int findIndex(int n)
{
    if (n <= 1)
        return n;

    int a = 0, b = 1, c = 1;
    int res = 1;

    while (c < n)
    {
        c = a + b;
        res++;
        a = b;
        b = c;
    }
    return res;
}

bool isPerfectSquare(int x)
{
    int s = sqrt(x);
    return (s * s == x);
}

bool isFibonacci(int n)
{
    return isPerfectSquare(5 * n * n + 4) || isPerfectSquare(5 * n * n - 4);
}

int main()
{
    fast;
    ll t;
    cin >> t;
    f[0] = f[1] = 1;
    s[0] = 1;
    s[1] = 2;
    rep(i, 2, 44)
    {
        f[i] = f[i - 1] + f[i - 2];
        s[i] = s[i - 1] + f[i];
    }

    while (t--)
    {
        cin >> n;
        ll curs = 0;
        fr(n)
        {
            cin >> arr[i];
            curs += arr[i];
        }
        if (n > 44)
        {
            cout << "NO";
            nl;
            continue;
        }
        ll x = 0;
        for (; x < 44; x++)
        {
            if (s[x] == curs)
            {
                break;
            }
        }
        if (x >= 44)
        {
            cout << "NO";
            nl;
            continue;
        }
        bool can = solve(x, -1);
        if (can)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
        nl;
    }

    return 0;
}
