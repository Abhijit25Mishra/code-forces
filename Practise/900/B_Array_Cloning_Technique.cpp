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
        ll n;
        cin >> n;
        multimap<ll, ll> a;
        fr(n)
        {
            ll temp;
            cin >> temp;
            if (a.find(temp) == a.end())
            {
                a.insert(make_pair(temp, 1));
            }
            else
            {
                auto x = a.find(temp);
                ll cnt = x->second;
                a.erase(x);
                cnt++;
                a.insert(make_pair(temp, cnt));
            }
                }
        ll max_freq = 0;
        for (auto x : a)
        {
            if (x.second > max_freq)
            {
                max_freq = x.second;
            }
        }
        ll ans = 0;
        while (max_freq != n)
        {
            if (max_freq & 1)
            {
                max_freq += 1;
                ans += 1 + max_freq / 2;
            }
            else
            {
                ans += 1 + max_freq / 2;
            }
            if (max_freq * 2 < n)
                max_freq *= 2;
            else
            {
                ll loss = n - max_freq;
                ans -= loss / 2;
                max_freq = n;
            }
        }
        cout << ans;
        nl;
    }
    return 0;
}
