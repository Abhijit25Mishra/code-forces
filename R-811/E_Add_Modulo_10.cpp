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
        bool five = false, zero = false;
        fr(n)
        {
            cin >> a[i];
            if (a[i] % 10 == 5)
            {
                five = true;
            }
            else if (a[i] % 10 == 0)
            {
                zero = true;
            }
        }

        bool ans = true;
        if (five || zero)
        {
            fr(n - 1)
            {
                if (a[i] % 10 == 5)
                {
                    a[i] += 5;
                }
                if (a[i + 1] % 10 == 5)
                {
                    a[i + 1] += 5;
                }
                if (a[i] == a[i + 1])
                {
                    continue;
                }
                else
                {
                    ans = false;
                }
            }
        }
        else
        {
            fr(n - 1)
            {
                if (a[i] & 1)
                {
                    a[i] = a[i] + (a[i] % 10);
                }
                if (a[i + 1] & 1)
                {
                    a[i + 1] = a[i + 1] + (a[i + 1] % 10);
                }
                if (a[i] == a[i + 1])
                {
                    continue;
                }
                else
                {
                    ll diff = abs(a[i] - a[i + 1]);
                    diff = diff % 20;
                    ll k = min(a[i], a[i + 1]);
                    k = k % 10;
                    if (k == 2)
                    {
                        if (diff == 2 || diff == 6 || diff == 14 || diff == 0)
                        {
                            a[i] = max(a[i], a[i + 1]);
                            a[i + 1] = max(a[i], a[i + 1]);
                        }
                        else
                        {
                            ans = false;
                        }
                    }
                    else if (k == 4)
                    {
                        if (diff == 4 || diff == 12 || diff == 18 || diff == 0)
                        {

                            a[i] = max(a[i], a[i + 1]);
                            a[i + 1] = max(a[i], a[i + 1]);
                        }
                        else
                        {
                            ans = false;

                            // cout << a[i] << " " << a[i + 1];
                            // nl;
                        }
                    }
                    else if (k == 8)
                    {
                        if (diff == 8 || diff == 14 || diff == 16 || diff == 0)
                        {

                            a[i] = max(a[i], a[i + 1]);
                            a[i + 1] = max(a[i], a[i + 1]);
                        }
                        else
                        {
                            ans = false;
                        }
                    }
                    else if (k == 6)
                    {
                        if (diff == 6 || diff == 8 || diff == 12 || diff == 0)
                        {

                            a[i] = max(a[i], a[i + 1]);
                            a[i + 1] = max(a[i], a[i + 1]);
                        }
                        else
                        {
                            ans = false;
                        }
                    }
                }
            }
        }
        // for (auto x : a)
        // {
        //     cout << x << " ";
        // }
        ans ? cout << "Yes" : cout << "No";
        nl;
    }
    return 0;
}
