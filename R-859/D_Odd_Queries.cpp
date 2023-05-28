
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
#ifndef ONLINE_JUDGE
#define debug(x) cerr<<#x<<" "; _print(x); cerr<<endl;
#else 
#define debug(x)
#endif
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


//Input Output Template
template <typename T> istream &operator>>(istream &istream, vector<T> &v) { for (auto &it : v)cin >> it; return istream; } //input vector<int> v by cin>>v;
template <typename T1, typename T2> istream &operator>>(istream &istream, pair<T1, T2> &p) { return (istream >> p.first >> p.second); } // input pair<int,int> p by cin>>p;
template <typename T1, typename T2> ostream &operator<<(ostream &ostream, const pair<T1, T2> &p) { return (ostream << p.first << " " << p.second); }//output pair<int,int> p by cin>>p;
template <typename T> ostream &operator<<(ostream &ostream, const vector<T> &c) { for (auto &it : c)cout << it << " "; return ostream; } //output vector<int> v by cin>>v;

//Debugger Function
void _print(ll t) { cerr << t; }
void _print(string t) { cerr << t; }
void _print(char t) { cerr << t; }
void _print(double t) { cerr << t; }
void _print(int t) { cerr << t; }

//Debugger Template
template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) { cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}"; }
template <class T> void _print(vector <T> v) { cerr << "[ "; for (T i : v) { _print(i); cerr << " "; } cerr << "]"; }
template <class T> void _print(set <T> v) { cerr << "[ "; for (T i : v) { _print(i); cerr << " "; } cerr << "]"; }
template <class T> void _print(multiset <T> v) { cerr << "[ "; for (T i : v) { _print(i); cerr << " "; } cerr << "]"; }
template <class T, class V> void _print(map <T, V> v) { cerr << "[ "; for (auto i : v) { _print(i); cerr << " "; } cerr << "]"; }


void solve()
{
    ll n, q;
    cin >> n >> q;
    vi a(n);
    cin >> a;
    // vi pre(n);
    // pre[0] = a[0];
    // rep(i, 1, n)
    // {
    //     pre[i] = pre[i - 1] + a[i];
    // }
    // ll sum = pre[n - 1];

    vi pre(n + 1);
    for (int i = 0; i < n; i++)
    {
        pre[i + 1] = pre[i] + a[i];
    }
    ll sum = accumulate(all(a), 0ll);
    bool ok;
    if (sum & 1)
    {
        ok = true;
    }
    else
    {
        ok = false;
    }
    while (q--)
    {

        ll l, r, k;
        cin >> l >> r >> k;
        if ((pre[n] - (pre[r] - pre[l - 1]) + k * (r - l + 1)) & 1) cout << "YES";
        else cout << "NO";
        nl;

        // {
        //     ll l, r, k;
        //     cin >> l >> r >> k;
        //     rep(i, l - 1, r)
        //     {
        //         if (k % 2 == 1)
        //         {
        //             if (a[i] % 2 == 1)
        //             {

        //             }
        //             else
        //             {
        //                 if (ok) { ok = false; }
        //                 else { ok = true; }
        //             }
        //         }
        //         else
        //         {

        //             if (a[i] % 2 == 1)
        //             {
        //                 if (ok) { ok = false; }
        //                 else { ok = true; }
        //             }
        //             else
        //             {

        //             }
        //         }
        //     }
        //     if (ok) { cout << "YES"; }
        //     else
        //     {
        //         cout << "NO";
        //     }
            // if (ans & 1)
            // {
            //     cout << "YES";
            // }
            // else
            // {
            //     cout << "NO";
            // }
        // nl;
    }

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

