// Aur Bhai Dekhne aagaye ;)
// Author: Abhijit Mishra
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#pragma GCC target("avx,avx2,fma")
#include <bits/stdc++.h>
using namespace std;
#define pi (3.141592653589)
#define mod 1000000007
#define pb push_back
#define is insert
#define ff first
#define ss second
#define all(x) x.begin(), x.end()
#define min3(a, b, c) min(c, min(a, b))
#define min4(a, b, c, d) min(d, min(c, min(a, b)))
#define rfr(n) for (int i = n - 1; i >= 0; i--)
#define rep1(i, a, b) for (long long i = a; i <= b; i++)
#define fr(n) for (long long i = 0; i < n; i++)
#define nesfr(x, y)                   \
    for (long long i = 0; i < x; i++) \
        for (long long j = 0; j < y; j++)
#define rep(i, a, b) for (long long i = a; i < b; i++)
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
typedef long long int ll;
typedef long double ld;
typedef vector<ll> vi;

int main()
{
    fast;
    ll t = 1;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        string s;
        cin >> s;
        s += 'W';
        ll rcnt = 0, bcnt = 0;
        bool flag = false;
        fr(n + 1)
        {
            if (s[i] == 'R')
            {
                rcnt++;
            }
            else if (s[i] == 'B')
            {
                bcnt++;
            }
            else
            {
                if ((bcnt == 0 && rcnt > 0) || (bcnt > 0 && rcnt == 0))
                {
                    cout << "NO" << endl;
                    flag = true;
                    break;
                }
                bcnt = 0;
                rcnt = 0;
            }
        }
        if (!flag)
            cout << "YES" << endl;

        // stack<char> v;
        // fr(n)
        // {
        //     char temp;
        //     cin >> temp;
        //     v.push(temp);
        // }
        // bool ans = false;
        // bool end = true;

        // vector<ll> a;

        // fr(n)
        // {
        //     if (v.top() == 'W' || v.empty())
        //     {
        //         v.pop();

        //         if (a.size() < 2 && end)
        //         {
        //             if (!v.empty())
        //             {
        //                 ans = false;
        //                 break;
        //             }
        //         }

        //         else
        //         {
        //             if (count(a.begin(), a.end(), 1) > 0 && count(a.begin(), a.end(), 0) > 0)
        //             {
        //                 ans = true;
        //             }
        //         }
        //     }
        //     else if (v.top() == 'R')
        //     { // r==1
        //         end = false;
        //         a.pb(1);
        //         v.pop();
        //     }
        //     else if (v.top() == 'B')
        //     { // b==0
        //         end = false;
        //         a.pb(0);
        //         v.pop();
        //     }
        // }
        // if(ans){
        //     c
        // }
    }
    return 0;
}
