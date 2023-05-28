
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
template <class T> void _print(deque <T> v);
template <class T, class V> void _print(pair <T, V> p) { cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}"; }
template <class T> void _print(vector <T> v) { cerr << "[ "; for (T i : v) { _print(i); cerr << " "; } cerr << "]"; }
template <class T> void _print(set <T> v) { cerr << "[ "; for (T i : v) { _print(i); cerr << " "; } cerr << "]"; }
template <class T> void _print(multiset <T> v) { cerr << "[ "; for (T i : v) { _print(i); cerr << " "; } cerr << "]"; }
template <class T, class V> void _print(map <T, V> v) { cerr << "[ "; for (auto i : v) { _print(i); cerr << " "; } cerr << "]"; }
template <class T> void _print(deque <T> v) { cerr << "[ "; for (T i : v) { _print(i); cerr << " "; } cerr << "]"; }





void solve()
{
    ll n;
    cin >> n;
    vector<int>a(n);
    int h = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] == 1)
        {
            h++;
        }
    }
    sort(a.begin(), a.end());
    int ans;
    for (int i = h; i >= 0; i--)
    {
        int k = i;
        bool prop = true;
        for (int j = 2; j <= i; j++)
        {
            if (k < n && a[k] <= j)
            {
                k++;
            }
            else
            {
                prop = false;
            }
        }
        if (prop)
        {
            ans = i;
            break;
        }
    }
    cout << ans << '\n';

    // deque<ll> a(n);
    // rep(i, 0, n)
    // {
    //     cin >> a[i];
    // }
    // if (n == 1)
    // {
    //     if (a[0] == 1)
    //     {
    //         cout << "1";
    //     }
    //     else
    //     {
    //         cout << "0";
    //     }
    //     nl;
    // }
    // else if (n == 2)
    // {
    //     if (min(a[0], a[1]) == 1)
    //     {
    //         cout << 1;
    //     }
    //     else
    //     {
    //         cout << 0;
    //     }
    //     nl;
    // }
    // else
    // {
    //     ll ans = -1;
    //     ll k = (n + 1) / 2;
    //     bool ok = false;
    //     sort(all(a));
    //     debug(k);
    //     bool flag = false;
    //     while (!ok && k > 0)
    //     {

    //         if (k == 1)
    //         {
    //             flag = true;
    //             if (min(a[0], a[1]) == 1)
    //             {

    //                 cout << 1;
    //             }
    //             else
    //             {
    //                 cout << 0;
    //             }
    //             nl;
    //             break;
    //         }
    //         else
    //         {
    //             ll tempk = k;
    //             vector<ll> tempkk(a.begin(), min(a.begin() + 2 * k, a.end()));
    //             deque<ll> temp(a.begin(), min(a.begin() + 2 * k, a.end()));
    //             // debug(temp);
    //             while (!a.empty() && tempk >= temp.back())
    //             {
    //                 tempk--;
    //                 temp.pop_back();
    //                 if (!temp.empty())
    //                 {
    //                     temp.pop_front();
    //                 }
    //                 debug(temp);
    //             }
    //             if (temp.empty())
    //             {
    //                 // cout << "working";
    //                 ok = true;
    //             }
    //             else
    //             {
    //                 k--;
    //             }

    //         }
    //     }
    //     if (!flag)
    //     {
    //         cout << k << endl;
    //     }
    // }
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
