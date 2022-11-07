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
        ll n;
        ll pos = 0, neg = 0;
        cin >> n;
        vi a(n);
        fr(n)
        {
            cin >> a[i];
            if (a[i] > 0)
            {
                pos++;
            }
            else
            {
                neg++;
            }
        }
        if (n & 1) { cout << -1; nl; }
        else
        {
            vector<pair<int, int> > ans;
            for (int i = 0; i < n; i += 2)
            {
                if (a[i] == a[i + 1])
                {
                    ans.push_back({ i, i + 1 });
                }
                else
                {
                    ans.push_back({ i, i });
                    ans.push_back({ i + 1, i + 1 });
                }
            }

            cout << ans.size() << "\n";
            for (auto i : ans)
            {
                cout << i.first + 1 << " " << i.second + 1 << "\n";
            }
        }

        // vector < pair <ll, ll>> an;
        // if (pos == 0 || neg == 0)
        // {
        //     cout << 1;
        //     nl;
        //     cout << "1 " << n;
        //     nl;
        // }
        // else if (pos > neg)
        // {
        //     fr(n)
        //     {
        //         if (a[i] > 0 && a[i + 1] > 0)
        //         {
        //             an.pb(mp(i, i + 1));
        //             // cout << i << " " << i + 1;
        //             i++;
        //             // nl;
        //         }
        //         else
        //         {
        //             an.pb(mp(i, i));
        //             // cout << i << " " << i;
        //             // nl;
        //             i++;
        //             an.pb(mp(i, i));
        //             // cout << i << " " << i;
        //             // nl;
        //         }
        //     }
        //     cout << an.size();
        //     nl;
        //     for (auto tt : an)
        //     {
        //         cout << tt.first + 1 << " " << tt.second + 1;
        //         nl;
        //     }
        // }
        // else if (neg > pos)
        // {
        //     fr(n)
        //     {
        //         if (a[i] < 0 && a[i + 1] < 0)
        //         {
        //             // cout << i << " " << i + 1;
        //             // i++;
        //             an.pb(mp(i, i + 1));
        //             i++;
        //             nl;
        //         }
        //         else
        //         {
        //             // cout << i << " " << i;
        //             // nl;
        //             an.pb(mp(i, i));
        //             i++;
        //             // cout << i << " " << i;
        //             // nl;
        //             an.pb(mp(i, i));
        //         }
        //     }
        //     cout << an.size();
        //     nl;
        //     for (auto tt : an)
        //     {
        //         cout << tt.first + 1 << " " << tt.second + 1;
        //         nl;
        //     }
        // }
        // else
        // {
        //     cout << n;
        //     nl;
        //     fr(n)
        //     {

        //         cout << i + 1 << " " << i + 1;
        //         nl;
        //     }
        // }
    // }
    }
    return 0;
}
