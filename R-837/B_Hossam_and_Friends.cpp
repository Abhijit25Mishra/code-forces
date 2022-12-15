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


// class DSU {
//     int *parent, *rank, n;
//     public:
//     DSU(int sz)
//     {
//         rank = new int[n];
//         parent = new int[n];
//         this->n = sz;
//         makeset();
//     }
//     void makeset()
//     {
//         rep(i, 1, n + 1)
//         {
//             parent[i] = i;
//         }
//     }
//     ll get(ll x)
//     {
//         return parent[x] = (parent[x] == x) ? x : get(parent[x]);
//     }
//     void uni(ll x, ll y)
//     {
//         x = get(x);
//         y = get(y);
//         if (rank[x] == rank[y]) { rank[x]++; }
//         if (rank[x] > rank[y]) { parent[y] = x; }
//         else { parent[x] = y; }
//     }
// };

struct DisjointSet {
    vector<ll> parent;
    vector<ll> size;

    DisjointSet(ll maxSize)
    {
        parent.resize(maxSize);
        size.resize(maxSize);
        for (ll i = 0; i < maxSize; i++)
        {
            parent[i] = i;
            size[i] = 1;
        }
    }

    ll find_set(ll v)
    {
        return parent[v] = (parent[v] == v) ? v : find_set(parent[v]);
    }

    void union_set(ll a, ll b)
    {
        a = find_set(a);
        b = find_set(b);
        if (a != b)
        {
            if (size[a] < size[b])
                swap(a, b);
            parent[b] = a;
            size[a] += size[b];
        }
    }
};

ll sss(ll x)
{
    return ((x * (x + 1)) / 2);
}

int main()
{
    fast;
    ll t = 1;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        ll sum = 0;
        vector<pair<ll, ll>> a;
        fr(m)
        {
            ll x, y;
            cin >> x >> y;
            if (abs(x - y) == 1)
            {
                a.pb(mp(min(x, y), max(x, y)));
            }
        }
        sort(all(a));
        ll small = 1;
        for (auto x : a)
        {
            sum = sss(x.first - small);
            small = x.first;
        }
        cout << sum + n;
        nl;


        // DisjointSet S(m + 5);
        // vector<pair<ll, ll>> a;

        // rep(i, 1, n + 1)
        // {
        //     a.pb(mp(i, i + 1));
        // }

        // vector<pair<ll, ll>> b;
        // fr(m)
        // {
        //     ll x, y;
        //     cin >> x >> y;
        //     a.erase(find(all(a), mp(x, y)));
        // }

        // for (auto x : a)
        // {
        //     S.union_set(x.first, x.second);
        // }

        // vector<ll> abc(n + 1);

        // rep(i, 1, n + 1)
        // {
        //     abc[S.find_set(i)]++;
        // }

        // ll sum = 0;

        // rep(i, 1, n + 1)
        // {
        //     sum += sss(abc[i]);
        // }

        // cout << sum;
        // nl;


    }
    return 0;
}
