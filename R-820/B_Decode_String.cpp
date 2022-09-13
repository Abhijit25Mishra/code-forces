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


int main()
{
    fast;
    ll t = 1;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        string s;
        cin >> s;
        string curr = "";
        char ans;
        deque<char> lol;
        for (int i = n - 1; i >= 0; i--)
        {
            if (s[i] == '0')
            {
                // ll a = (ll)s[i - 1], b = (ll)s[i - 2];
                char a = s[i - 1];
                char b = s[i - 2];
                string temp = "";
                temp += b;
                temp += a;
                // cout << temp;
                // nl;
                ll x = stoi(temp);
                ans = (char)(x - 1 + 97);
                lol.pb(ans);
                i--; i--;
            }
            else
            {
                ans = (char)(s[i] - 49 + 97);
                lol.pb(ans);
            }
        }
        // fr(n)
        // {
        //     if (s[i] != '0')
        //     {
        //         curr.pb(s[i]);
        //     }
        //     if (s[i] == '0')
        //     {
        //         // cout << curr;
        //         // nl;
        //         if (curr.length() == 3)
        //         {
        //             // cout << curr[0];
        //             // nl;
        //             ans = (char)(curr[0] - 49 + 97);
        //             lol.pb(ans);
        //             // cout << ans;
        //             // nl;
        //             string temp = "";
        //             temp += curr[1];
        //             temp += curr[2];
        //             ll x = stoi(temp);
        //             // cout << x;
        //             ans = (char)(x - 1 + 97);
        //             lol.pb(ans);
        //             // cout << ans;
        //             // nl;
        //         }
        //         else if (curr.length() == 2)
        //         {
        //             string temp = "";
        //             temp += curr[0];
        //             temp += curr[1];
        //             ll x = stoi(temp);
        //             ans = (char)(x + 97);
        //             lol.pb(ans);
        //             // cout << ans;
        //             // nl;
        //         }
        //         curr = "";
        //     }
        //     if (i == n - 1)
        //     {
        //         if (s[n - 2] != '0')
        //         {
        //             ans = (char)(s[n - 2] - 49 + 97);
        //             lol.pb(ans);
        //         }
        //         if (s[n - 1] != '0')
        //         {
        //             ans = (char)(s[n - 1] - 49 + 97);
        //             lol.pb(ans);
        //         }
        //     }

        // }
        reverse(all(lol));
        for (auto y : lol)
        {
            cout << y;
        }
        nl;
    }
    return 0;
}
