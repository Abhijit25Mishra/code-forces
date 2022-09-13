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
        string s;
        int w, m;
        cin >> s >> w >> m;
        int n = s.size();
        vector<int> a(n + 1);
        for (int i = 0; i < n; i += 1)
            a[i + 1] = (a[i] + s[i] - '0') % 9;
        vector<vector<int>> v(9);
        for (int i = 1; i + w - 1 <= n; i += 1)
            v[(a[i + w - 1] + 9 - a[i - 1]) % 9].push_back(i);
        for (int i = 0; i < m; i += 1)
        {
            int l, r, k;
            cin >> l >> r >> k;
            pair<int, int> p = { -1, -1 };
            int w = (a[r] + 9 - a[l - 1]) % 9;
            for (int i = 0; i < 9; i += 1)
                for (int j = 0; j < 9; j += 1)
                    if ((i * w + j) % 9 == k)
                    {
                        if (i == j)
                        {
                            if (v[i].size() >= 2)
                            {
                                if (p.first == -1 or p > make_pair(v[i][0], v[i][1]))
                                    p = { v[i][0], v[i][1] };
                            }
                        }
                        else if (v[i].size() and v[j].size())
                        {
                            if (p.first == -1 or p > make_pair(v[i][0], v[j][0]))
                                p = { v[i][0], v[j][0] };
                        }
                    }
            cout << p.first << " " << p.second << "\n";
        }
    }
    return 0;
}
