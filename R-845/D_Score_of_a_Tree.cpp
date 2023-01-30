#pragma GCC optimize(3)
#include<bits/stdc++.h>
#define MAXN 200005
#define INF 1000000000
#define MOD 1000000007
#define F first
#define S second
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
int t, n, k, a[MAXN];
vector<int> G[MAXN];
int f[MAXN];
void add(int &a, int b) { a += b; if (a >= MOD) a -= MOD; }
void dfs(int v, int p)
{
    f[v] = 1;
    for (auto to : G[v])
    {
        if (to == p) continue;
        dfs(to, v); f[v] = max(f[v], f[to] + 1);
    }
}
int pow_mod(int a, int i)
{
    int s = 1;
    while (i)
    {
        if (i & 1) s = 1LL * s * a % MOD;
        a = 1LL * a * a % MOD;
        i >>= 1;
    }
    return s;
}
int main()
{
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &n);
        for (int i = 1; i <= n; i++) G[i].clear();
        for (int i = 0; i < n - 1; i++)
        {
            int u, v; scanf("%d%d", &u, &v);
            G[u].push_back(v); G[v].push_back(u);
        }
        dfs(1, 0);
        int ans = 0;
        for (int i = 1; i <= n; i++) add(ans, f[i]);
        ans = 1LL * ans * pow_mod(2, n - 1) % MOD;
        printf("%d\n", ans);
    }
    return 0;
}

// // Aur Bhai Dekhne aagaye ;)
// // Author: Abhijit Mishra 
// #pragma GCC optimize("Ofast")
// #pragma GCC optimize("no-stack-protector")
// #pragma GCC optimize("unroll-loops")
// #pragma GCC target("sse,sse2,sse3,ssse3,popcnt,abm,mmx,tune=native")
// #pragma GCC optimize("fast-math")
// #pragma GCC optimize("Ofast")
// #pragma GCC optimize("unroll-loops")
// #pragma GCC target("avx,avx2,fma")
// #include <bits/stdc++.h>
// using namespace std;
// template<typename typC> istream &operator>>(istream &cin, vector<typC> &a) { for (auto &x : a) cin >> x; return cin; }
// template<typename typC> ostream &operator<<(ostream &cout, const vector<typC> &a) { int n = a.size(); if (!n) return cout; cout << a[0]; for (int i = 1; i < n; i++) cout << ' ' << a[i]; return cout; }
// #define pi (3.141592653589)
// #define mod 1000000007
// #define pb push_back
// #define is insert
// #define mp make_pair
// #define ff first
// #define ss second
// #define all(x) x.begin(), x.end()
// #define min3(a, b, c) min(c, min(a, b))
// #define min4(a, b, c, d) min(d, min(c, min(a, b)))
// #define rfr(n) for(int i=n-1;i>=0;i--)
// #define rep1(i,a,b) for(long long i=a;i<=b;i++)
// #define fr(n) for(long long i=0;i<n;i++)
// #define nesfr(x,y) for(long long i=0;i<x;i++)for(long long j=0;j<y;j++)
// #define rep(i,a,b) for(long long i=a;i<b;i++)
// #define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
// typedef long long int ll;
// typedef long double ld;
// typedef vector<ll> vi;
// #define nl cout << "\n"
// const unsigned int MOD = 1000000007;
// const int  N = 2e5 + 5;
// #define MAXN 200005

// // Return summation of r * nCr
// // int summation(int n)
// // {
// //     ll ans = n;
// //     n--;
// //     while (n--)
// //     {
// //         ans *= 2;
// //         ans %= M;
// //     }
// //     return ans;
// // }
// // ll ksm(ll x, int y)
// // {
// //     ll r = 1;
// //     while (y)
// //     {
// //         if (y & 1) r = (ll)r * x % M;
// //         x = (ll)x * x % M;
// //         y >>= 1;
// //     }
// //     return r;
// // }

// int t, n, k, a[MAXN];
// vector<int> G[MAXN];
// int f[MAXN];
// void add(int &a, int b) { a += b; if (a >= MOD) a -= MOD; }
// void dfs(int v, int p)
// {
//     f[v] = 1;
//     for (auto to : G[v])
//     {
//         if (to == p) continue;
//         dfs(to, v); f[v] = max(f[v], f[to] + 1);
//     }
// }
// int pow_mod(int a, int i)
// {
//     int s = 1;
//     while (i)
//     {
//         if (i & 1) s = 1LL * s * a % MOD;
//         a = 1LL * a * a % MOD;
//         i >>= 1;
//     }
//     return s;
// }

// void solve()
// {
//     int n;
//     cin >> n;

//     for (int i = 0; i < n - 1; i++)
//     {
//         int u, v;
//         cin >> u >> v;
//         G[u].push_back(v);
//         G[v].push_back(u);
//     }

//     dfs(1, 0);
//     int ans = 0;
//     for (int i = 1; i <= n; i++)
//     {
//         add(ans, f[i]);
//     }
//     ans = 1LL * ans * pow_mod(2, n - 1) % MOD;
//     cout << ans;
//     nl;

//     // ll ans = 0;
//     // vector<int> dep(n + 1), md(n + 1);


//     // ans = ans * ksm(2, n - 1) % M;
//     // cout << ans;
//     // nl;
//     // // cout << summation(7);
//     // ll n;
//     // cin >> n;
//     // map<ll, set<ll>> a;
//     // fr(n)
//     // {
//     //     ll x, y;
//     //     cin >> x >> y;
//     //     a[x].insert(y);
//     //     a[y].insert(x);
//     // }



//     // ll ans = 0;
//     // set<ll> remov;

//     // while (remov.size() != n - 1)
//     // {
//     //     for (auto x : a)
//     //     {
//     //         if (x.second.size() <= 1)
//     //         {
//     //             remov.insert(x.first);
//     //         }
//     //     }


//     //     for (auto i : remov)
//     //     {

//     //         a.erase(i);
//     //     }
//     //     ans += n - remov.size();
//     //     nl; nl;
//     //     for (auto x : a)
//     //     {
//     //         // cout << x.first << " ";
//     //         for (auto i : remov)
//     //         {
//     //             x.second.erase(i);
//     //         }
//     //         // for (auto i : x.second)
//     //         // {
//     //         //     cout << i;
//     //         // }
//     //     }
//     //     // cout << remov.size();
//     //     // break;
//     //     // if (!a.empty())
//     //     // {
//     //     //     for (auto x : a)
//     //     //     {
//     //     //         for (auto i : remov)
//     //     //         {
//     //     //             x.second.erase(i);
//     //     //         }
//     //     //     }
//     //     // }
//     // }

//     // cout << ans;


// }
// int main()
// {
//     fast;
//     ll t = 1;
//     cin >> t;
//     while (t--)
//     {
//         solve();
//     }
//     return 0;
// }
