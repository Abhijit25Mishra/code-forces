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
        string s;
        cin >> s;
        ll len = s.length();
        // cout << len;
        ll acnt = 0;
        ll bcnt = 0;
        bool flag = false;
        if (s[len - 1] == 'a')
        {
            s += 'b';
        }
        else
        {
            s += 'a';
        }

        fr(len + 1)
        {
            if (len < 2)
            {
                cout << "NO" << endl;
                flag = true;
                break;
            }
            if (s[i] == 'a')
            {
                acnt++;
                if (bcnt > 0)
                {
                    // cout << "bcnt=" << bcnt;
                    if (bcnt == 1)
                    {
                        cout << "NO" << endl;
                        flag = true;
                        break;
                    }
                    else
                    {
                        bcnt = 0;
                    }
                }
            }
            else if (s[i] == 'b')
            {
                bcnt++;
                // cout << "bcnt++" << bcnt;
                if (acnt > 0)
                {
                    if (acnt == 1)
                    {
                        cout << "NO" << endl;
                        flag = true;
                        break;
                    }
                    else
                    {
                        acnt = 0;
                    }
                }
            }
        }
        if (!flag)
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}
