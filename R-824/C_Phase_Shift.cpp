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


class DSU {
    int *parent, *rank, n;
    public:
    DSU(int sz)
    {
        rank = new int[n];
        parent = new int[n];
        this->n = sz;
        makeset();
    }
    void makeset()
    {
        rep(i, 1, n + 1)
        {
            parent[i] = i;
        }
    }
    ll get(ll x)
    {
        return parent[x] = (parent[x] == x) ? x : get(parent[x]);
    }
    void uni(ll x, ll y)
    {
        x = get(x);
        y = get(y);
        if (rank[x] == rank[y]) { rank[x]++; }
        if (rank[x] > rank[y]) { parent[y] = x; }
        else { parent[x] = y; }
    }
};




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

        // set<char> k;
        // fr(n) { k.insert(s[i]); }
        // if (k.size() == 26) {}
        // else
        // {
        //     deque<char> ch;
        //     fr(26) { ch.pb(char(97 + i)); }
        //     ll j = 0;

        //     map<char, char> x;
        //     fr(n)
        //     {
        //         if (x.find(s[i]) == x.end())
        //         {

        //             if (s[i] != ch.front())
        //             {
        //                 if (x[s[i]] != ch.front())
        //                 {
        //                     x[s[i]] = ch.front();
        //                     ch.pop_front();
        //                 }
        //                 else
        //                 {
        //                     char ext = ch.front();
        //                     ch.pop_front();
        //                     x[s[i]] = ch.front();
        //                     ch.pop_front();
        //                     ch.push_front(ext);
        //                 }
        //             }
        //             else
        //             {
        //                 char ext = ch.front();
        //                 ch.pop_front();
        //                 x[s[i]] = ch.front();
        //                 ch.pop_front();
        //                 ch.push_front(ext);
        //             }
        //         }
        //     }


        //     string ans = "";
        //     fr(n)
        //     {
        //         ans += x[s[i]];
        //     }

        //     cout << ans;
        //     nl;
    // }
    }
    return 0;
}
