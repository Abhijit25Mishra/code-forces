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
#define rfr(n) for(int i=n-1;i>=0;i--)
#define rep1(i,a,b) for(long long i=a;i<=b;i++)
#define fr(n) for(long long i=0;i<n;i++)
#define nesfr(x,y) for(long long i=0;i<x;i++)for(long long j=0;j<y;j++)
#define rep(i,a,b) for(long long i=a;i<b;i++)
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
typedef long long int ll;
typedef long double ld;
typedef vector<ll> vi;
#define nl cout << "\n"
const unsigned int M = 1000000007;
const int  N = 2e5 + 5;

ll f[10000000];
char a[10000000];

int main()
{
    fast;
    ll t = 1;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        // string s = "Z";
        // string temp;
        // cin >> temp;
        // s += temp;
        // n++;
        // queue<ll> q;
        // cout << s;
        ll ans = 0;

        for (ll i = 1; i <= n; i++)
        {
            cin >> a[i];
            f[i] = i;
        }
        for (ll i = 1; i <= n; i++)
        {
            if (a[i] == '0')
            {
                ans += f[i];
            }
            for (ll j = i; j <= n; j += i)
            {
                if (a[j] == '1') break;
                f[j] = min(f[j], i);
            }
        }
        cout << ans;
        nl;
        // for (int i = 1; i < (n / 2); i++)
        // {
        //     if (s[i] == '0')
        //     {
        //         ans += i;
        //         ll j = 2;
        //         ll k = i * j;
        //         while (s[k] == '0')
        //         {
        //             ans += i;
        //             s[k] = char(-1);
        //             q.push(k);
        //             j++;
        //             k = i * j;
        //         }
        //     }
        // }

        // while (!q.empty())
        // {
        //     ll x = q.front();
        //     q.pop();
        //     ll j = 2;
        //     ll k = x * j;
        //     while (s[k] == '0')
        //     {
        //         ans += x;
        //         s[k] = char(-1);
        //         q.push(k);
        //         j++;
        //         k = x * j;
        //     }
        // }

        // rep(i, (n / 2) + 1, n + 1)
        // {
        //     if (s[i] == '0')
        //     {
        //         ans += i;
        //     }
        // }
        // cout << ans << endl;
    }
    return 0;
}
