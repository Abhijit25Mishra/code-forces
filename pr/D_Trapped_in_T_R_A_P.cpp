
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


ll eq, sum;
ll f(string str, ll i = 0, ll s = 0)
{
    ll ans = 0;

    if (i == str.size())
    {
        eq++;
        return (s == sum);
    }
    if (str[i] == '+')
    {
        ans += f(str, i + 1, s + 1);
    }
    else if (str[i] == '-')
    {
        ans += f(str, i + 1, s - 1);
    }
    else
    {
        ans += (f(str, i + 1, s + 1) + f(str, i + 1, s - 1));
    }
    return ans;
}

void solve()
{
    string s1, s2;
    cin >> s1 >> s2;

    sum = 0;
    eq = 0;
    ll n = s1.size();
    ll cnt = 0;
    fr(n)
    {
        if (s1[i] == '+')
        {
            sum++;
        }
        else
        {
            sum--;
        }
        if (s1[i] == '?')
        {
            cnt++;
        }
    }
    long double yes = f(s2);
    long double ans = (long double)(yes) / (long double)(eq);
    cout << fixed << setprecision(12) << ans;


    // ll p1 = 0, m1 = 0;
    // ll p2 = 0, m2 = 0, q2 = 0;
    // ll n = s1.size();
    // fr(n)
    // {
    //     if (s1[i] == '+') { p1++; }
    //     else { m1++; }
    // }
    // fr(n)
    // {
    //     if (s2[i] == '+') { p2++; }
    //     else if (s2[i] == '-') { m2++; }
    //     else { q2++; }
    // }

    // ll ab1 = p1 - m1;
    // ll ab2 = p2 - m2;
    // ll diff = abs(ab1 - ab2);
    // ll ab2mx = ab2 + q2;
    // ll ab2mi = ab2 - q2;
    // if (q2 == 0 && ab1 == ab2)
    // {
    //     cout << 1;
    // }
    // else if (q2 == 0 && ab1 != ab2)
    // {
    //     cout << 0;
    // }
    // else
    // {
    //     if (ab1 > ab2mx || ab1 < ab2mi)
    //     {
    //         cout << 0;
    //     }
    //     else
    //     {
    //         if (diff % 2 == 1)
    //         {
    //             if (q2 % 2 == 0)
    //             {
    //                 cout << 0;
    //             }
    //             else
    //             {
    //                 double abc = q2 - diff;
    //                 double ans = abc * diff;
    //                 ans /= q2;
    //                 ans /= q2;
    //                 cout << ans;
    //             }
    //         }
    //         else
    //         {
    //             if (q2 % 2 == 0)
    //             {
    //                 if (diff == 0)
    //                 {
    //                     cout << 0.5;
    //                 }
    //                 else
    //                 {
    //                     double abc = q2 - diff;
    //                     double ans = abc * diff;
    //                     ans /= q2;
    //                     ans /= q2;
    //                     cout << ans;
    //                 }
    //             }
    //             else
    //             {
    //                 cout << 0;
    //             }
    //         }
    //     }
    // }
    // nl;
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

