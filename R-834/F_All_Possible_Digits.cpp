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
        int N, P;
        cin >> N >> P;
        set<int>S;
        ll A[105];
        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
            S.insert(A[i]);
        }
        if (S.size() == P)
        {
            cout << "0\n";
            continue;
        }
        int f = 0;
        while (S.find(f) != S.end())f++;
        if (A[N - 1] <= f)
        {
            int lst = P - 1;
            while (S.find(lst) != S.end())lst--;
            cout << lst - A[N - 1] << "\n";
            continue;
        }
        int ans = P - A[N - 1];
        S.insert(0);
        int carry = 1;
        for (int i = N - 2; i >= 0 || carry != 0; i--)
        {
            int a = carry;
            if (i >= 0)a += A[i];
            S.insert(a % P);
            carry = a / P;
        }
        int lst = A[N - 1];
        while (lst >= 0 && S.find(lst) != S.end())lst--;
        if (lst >= 0)ans += lst;
        cout << ans << "\n";

        // ll n, p;
        // cin >> n >> p;
        // vi a(n + 1);
        // set<ll> s;
        // fr(p)
        // {
        //     s.insert(i);
        // }
        // fr(n + 1)
        // {
        //     if (i == 0)
        //     {
        //         a[i] = 0;
        //         continue;
        //     }
        //     cin >> a[i];
        //     s.erase(a[i]);
        // }
        // ll sm = *s.begin();
        // ll lar = 0;
        // for (auto x : s)
        // {
        //     lar = max(x, lar);
        // }
        // // ll lar = *s.end();
        // ll ans = 0;
        // ll y = a[n];
        // if (s.size() == 0) { ans = 0; }
        // else if (sm < a[n])
        // {
        //     ans = p - a[n];
        //     bool prev = true;
        //     a[n] = p - 1;
        //     for (int i = n; i > -1; i--)
        //     {
        //         if (a[i] == (p - 1) && prev == true)
        //         {
        //             a[i] = 0;
        //         }
        //         else
        //         {
        //             a[i]++;
        //             prev = false;
        //             break;
        //         }
        //     }
        //     // cout << ans;
        //     for (auto x : a)
        //     {
        //         // cout << x << " ";
        //         s.erase(x);
        //     }
        //     for (auto x : s)
        //     {
        //         if (x >= y)
        //         {
        //             // cout << x << endl;
        //             s.erase(x);
        //         }
        //     }
        //     lar = 0;
        //     for (auto x : s)
        //     {
        //         lar = max(x, lar);
        //     }
        //     if (!s.empty())
        //     {
        //         // cout << lar;
        //         ans += lar;
        //     }


        // }
        // else
        // {

        //     // cout << lar << " " << a[n];
        //     // nl;
        //     ans = lar - a[n];
        // }

        // cout << ans << endl;





    }
    return 0;
}
