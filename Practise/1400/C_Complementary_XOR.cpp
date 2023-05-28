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
template<typename typC> istream &operator>>(istream &cin, vector<typC> &a) { for (auto &x : a) cin >> x; return cin; }
template<typename typC> ostream &operator<<(ostream &cout, const vector<typC> &a) { int n = a.size(); if (!n) return cout; cout << a[0]; for (int i = 1; i < n; i++) cout << ' ' << a[i]; return cout; }
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

string compliment(string s)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '1')
        {
            s[i] = '0';
        }
        else
        {
            s[i] = '1';
        }
    }
    return s;
}


void solve()
{
    ll n;
    cin >> n;
    string a, b;
    cin >> a >> b;
    bool ok = true;
    bool opp = false, same = false;
    ll ones = 0;
    // string a, b;
    // cin >> n >> a >> b;
    if (n == 1 && b == "1")
    {
        cout << "No\n";
        return;
    }
    vector<int> f(n), g(n);
    for (int i = 1; i < n; i ++) f[i] = (a[i] - '0') ^ (a[i - 1] - '0');
    for (int i = 1; i < n; i ++) g[i] = (b[i] - '0') ^ (b[i - 1] - '0');
    f[0] = a[0] - '0';
    g[0] = b[0] - '0';
    int flag = 1;
    for (int i = 1; i < n; i ++) if (f[i] != g[i])
    {
        cout << "No\n";
        flag = 0;
        break;
    }
    if (!flag) return;
    vector<pair<int, int>> ans;
    int lst = -1;
    for (int i = 1; i < n; i ++) if (f[i])
    {
        if (lst == -1)
        {
            lst = i;
        }
        else
        {
            ans.emplace_back(lst + 1, i);
            g[0] ^= 1;
            lst = -1;
        }
    }
    if (lst != -1)
    {
        ans.emplace_back(1, lst);
        f[0] ^= 1;
    }
    if (f[0] && g[0])
    {
        ans.emplace_back(1, 1);
        ans.emplace_back(2, n);
    }
    else if (f[0] && !g[0])
    {
        ans.emplace_back(1, n);
    }
    else if (!f[0] && g[0])
    {
        ans.emplace_back(1, 1);
        ans.emplace_back(2, 2);
        ans.emplace_back(1, 2);
    }
    cout << "Yes\n";
    cout << ans.size() << '\n';
    for (auto [l, r] : ans) cout << l << ' ' << r << '\n';
    // fr(n)
    // {
    //     if (s1[i] == '1')
    //     {
    //         ones++;
    //     }
    //     if (s1[i] == s2[i])
    //     {
    //         same = true;
    //     }
    //     if (s1[i] != s2[i])
    //     {
    //         opp = true;
    //     }
    // }
    // if (same && opp)
    // {
    //     cout << "NO";
    //     nl;
    // }
    // else
    // {
    //     bool lmao = true;
    //     vector<pair<ll, ll>> ans;
    //     if (ones & 1)
    //     {

    //         if (same)
    //         {
    //             if (ones == n)
    //             {
    //                 ans.pb(mp(1, 1));
    //                 ans.pb(mp(2, n));
    //                 lmao = false;
    //             }
    //             else
    //             {
    //                 ans.pb(mp(1, n));
    //                 fr(n)
    //                 {
    //                     if (s1[i] == '1') { s1[i] = '0'; }
    //                     else { s1[i] = '1'; }
    //                 }
    //             }
    //         }
    //     }
    //     else
    //     {
    //         if (same)
    //         {
    //         }
    //         else
    //         {
    //             ans.pb(mp(1, n));

    //             fr(n)
    //             {
    //                 if (s1[i] == '1') { s1[i] = '0'; }
    //                 else { s1[i] = '1'; }
    //             }
    //         }
    //     }
    //     if (lmao)
    //     {
    //         fr(n)
    //         {
    //             if (s1[i] == '1') { ans.pb(mp(i + 1, i + 1)); }
    //         }
    //     }
    //     cout << "YES";
    //     nl;
    //     cout << ans.size();
    //     nl;
    //     for (auto i : ans)
    //     {
    //         cout << i.first << " " << i.second << endl;
    //     }
    // }


    // complety same -even 1s 
    // just flip every 1

    // complety same -odd 1s 
    // complete flip the first string then flip every 1 

    // completly diff -even 1s 
    // complete flip then all ones

    // completly diff -odd 1s
    // flip very 1


}
int main()
{
    fast;
    ll t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
