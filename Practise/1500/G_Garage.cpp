
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


ll cnt(ll i)
{
    ll ans = ((i / 2) + (i / 4) - 2);
    if (i % 4 == 0) { ans--; }
    return ans;
}

void solve()
{
    ll n;
    cin >> n;

    /*
    Fast
    by ksun
    */
    ll ans;
    if (n == 1)
    {
        ans = 3;
    }
    else if (n % 3 == 0)
    {
        ans = (n / 3) * 4 + 3;
    }
    else if (n % 3 == 1)
    {
        ans = (n / 3) * 4 + 4;
    }
    else
    {
        ans = (n / 3) * 4 + 5;
    }
    cout << ans;
    nl;


    /*
    slow
    accepted (after several modification)
    */
    // vi ans;
    // ll mult = 3 * n;
    // if (n == 1)
    // {
    //     ans.pb(3);
    //     n = 0;
    //     mult = 0;
    // }
    // else if (n > 100 && n < 1e6)
    // {
    //     mult /= 2;
    // }
    // else if (n >= 1e6)
    // {
    //     mult /= 2;
    //     mult += 50;

    // }
    // for (int i = mult; i > n; i--)
    // {
    //     if (cnt(i) == n - 1)
    //     {
    //         ans.pb(i);
    //         break;
    //     }
    // }
    // cout << ans.back();


/*
    very slow
    not accepted
*/
// vi a;
    // for (int i = 1; i < 1000; i++)
    // {
    //     for (int j = i + 1; j < 1000; j++)
    //     {
    //         a.pb(j * j - i * i);
    //     }
    // }
    // sort(all(a));
    // a.erase(unique(all(a)), a.end());
    // debug(a);
    // cout << a[n - 1];

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

