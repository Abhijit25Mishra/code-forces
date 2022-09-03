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

std::random_device seed_gen;
std::mt19937_64 engine(seed_gen());

int main()
{
    fast;
    ll t = 1;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll k = 0;
        set<ll> st;
        n--;
        while (1)
        {
            while (n--)
            {
                ll tg = engine() & ((1ll << 31) - 1);
                k ^= tg;
                st.insert(tg);
            }
            if (st.count(k) && st.size() != n)
            {
            }
            else
            {
                break;
            }
        }

        {
            st.insert(k);
            for (auto x : st)
            {
                cout << x << " ";
            }
            nl;
        }

        // first approach

        // fr(n - 3)
        // {
        //     cout << i + 1 << " ";
        //     k ^= (i + 1);
        // }
        // ll a = pow(2, 29);
        // cout << a << " " << a * 2;
        // k ^= a;
        // k ^= a * 2;
        // cout << " " << k;
        // nl;

        // second approach

        // vi ans;
        // k = n % 4;
        // if (k == 0)
        // {
        //     ans.pb(2);
        //     ans.pb(1);
        //     ans.pb(3);
        //     ans.pb(0);
        //     n -= 4;
        // }
        // else if (k == 1)
        // {
        //     ans.pb(2);
        //     ans.pb(0);
        //     ans.pb(4);
        //     ans.pb(5);
        //     ans.pb(3);
        //     n -= 5;
        // }
        // else if (k == 2)
        // {
        //     ans.pb(4);
        //     ans.pb(1);
        //     ans.pb(2);
        //     ans.pb(12);
        //     ans.pb(3);
        //     ans.pb(8);
        //     n -= 6;
        // }
        // else if (k == 3)
        // {
        //     ans.pb(2);
        //     ans.pb(1);
        //     ans.pb(3);
        //     n -= 3;
        // }
        // ll abc = 100;
        // fr(n)
        // {
        //     ans.pb(100 + i);
        // }
        // for (auto x : ans)
        // {
        //     cout << x << " ";
        // }
        // nl;

        // third approach
    }
    return 0;
}
