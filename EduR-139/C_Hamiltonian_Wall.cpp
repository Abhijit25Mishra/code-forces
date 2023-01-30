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

        int m;
        cin >> m;
        vector<vector<char>> c(2, vector<char>(m));
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < m; k++)
            {
                cin >> c[j][k];
            }
        }
        vector<bool> ok(2, true);
        int cnt = 0;
        for (int j = 0; j < m; j++)
        {
            if (c[0][j] == 'B' && c[1][j] == 'B')
            {
                cnt++;
            }
            if (c[0][j] == 'W')
            {
                ok[cnt % 2] = false;
                // cout << cnt % 2 << " " << cnt;
                // nl;
            }
            if (c[1][j] == 'W')
            {
                ok[1 - cnt % 2] = false;
                // cout << 1 - (cnt % 2) << " " << (cnt % 2) << " " << cnt;
                // nl;
            }
        }
        if (ok[0] || ok[1])
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }


    return 0;
}
