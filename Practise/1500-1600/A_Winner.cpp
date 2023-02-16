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



void solve()
{
    ll n;
    cin >> n;
    // vector<pair<string, int>> rounds(n);
    // map<string, int> player2score;
    // for (int i = 0; i < n; ++i)
    // {
    //     cin >> rounds[i].first >> rounds[i].second;
    //     player2score[rounds[i].first] += rounds[i].second;
    // }

    // set<string> winners;
    // int m(-1000001);
    // for (map<string, int>::iterator it = player2score.begin(); it != player2score.end(); ++it)
    // {
    //     if (it->second > m)
    //     {
    //         m = it->second;
    //         winners.clear();
    //         winners.insert(it->first);
    //     }
    //     else if (it->second == m)
    //     {
    //         winners.insert(it->first);
    //     }
    // }

    // if (winners.size() > 1)
    // {
    //     player2score.clear();
    //     for (vector<pair<string, int>>::iterator it = rounds.begin(); it != rounds.end(); ++it)
    //     {
    //         player2score[it->first] += it->second;
    //         if (player2score[it->first] >= m && winners.count(it->first) == 1)
    //         {
    //             winners.clear();
    //             winners.insert(it->first);
    //             break;
    //         }
    //     }
    // }

    // cout << *winners.begin() << endl;
    vector<pair<string, ll>> v;
    map<string, ll> m;
    fr(n)
    {
        string s;
        ll x;
        cin >> s >> x;
        v.pb(mp(s, x));
        m[s] += x;
    }
    string ans;
    ll mx = INT64_MIN;
    ll k = 0;
    set<string> se;
    for (auto x : m)
    {
        mx = max(mx, x.second);
    }
    for (auto x : m)
    {
        if (mx == x.second) { k++; ans = x.first; se.insert(x.first); }
    }
    if (k == 1) { cout << ans; }
    else
    {
        map<string, ll> z;
        ll mxx = INT64_MIN;
        string winner;
        fr(n)
        {
            z[v[i].first] += v[i].second;
            if (z[v[i].first] >= mx && se.count(v[i].first))
            {
                mxx = z[v[i].first];
                winner = v[i].first;
                break;
            }
        }
        cout << winner;
        nl;

    }

}
int main()
{
    fast;
    ll t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
