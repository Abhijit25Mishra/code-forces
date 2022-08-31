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
#define nl cout << "\n"
const unsigned int M = 1000000007;
const int N = 2e5 + 5;

int main()
{
    fast;
    ll t = 1;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        map<string, int> mp;
        vector<string> a(n), b(n), c(n);

        fr(n)
        {
            cin >> a[i];
            mp[a[i]]++;
        }
        fr(n)
        {
            cin >> b[i];
            mp[b[i]]++;
        }
        fr(n)
        {
            cin >> c[i];
            mp[c[i]]++;
        }

        ll x = 0, y = 0, z = 0;
        fr(n)
        {
            if (mp[a[i]] == 1)
            {
                x += 3;
            }
            else if (mp[a[i]] == 2)
            {
                x += 1;
            }
            if (mp[b[i]] == 1)
            {
                y += 3;
            }
            else if (mp[b[i]] == 2)
            {
                y += 1;
            }
            if (mp[c[i]] == 1)
            {
                z += 3;
            }
            else if (mp[c[i]] == 2)
            {
                z += 1;
            }
        }
        cout << x << " " << y << " " << z;
        nl;
        // set<string> ab, bc, ac, abc;
        // fr(n)
        // {
        //     cin >> a[i];
        //     // ab.insert(a[i]);
        //     // ac.insert(a[i]);
        // }
        // fr(n)
        // {
        //     cin >> b[i];
        //     // ab.insert(b[i]);
        //     // bc.insert(b[i]);
        // }
        // fr(n)
        // {
        //     cin >> c[i];
        //     // bc.insert(c[i]);
        //     // ac.insert(c[i]);
        // }
        // ll abs = ab.size();
        // ll acs = ac.size();
        // ll bcs = bc.size();
        // ll abcs = abs + acs - (bcs);

        // ll x = 3 * n, y = 3 * n, z = 3 * n;

        // x -= 2 * (abs + acs);
        // y -= 2 * (abs + bcs);
        // z -= 2 * (acs + bcs);

        // x += abcs;
        // y += abcs;
        // z += abcs;
        // cout << abs << " " << bcs << " " << acs << " " << abcs;

        // cout << x << " " << y << " " << z;
        // nl;
        // vector<string> p, q, r;

        // for (int i = 0; i < n; i++)
        // {
        //     for (int j = 0; j < n; j++)
        //     {
        //         if (a[i] == b[j])
        //         {
        //             x -= 2;
        //             y -= 2;
        //             p.pb(a[i]);
        //         }
        //     }
        // }

        // for (int i = 0; i < n; i++)
        // {
        //     for (int j = 0; j < n; j++)
        //     {
        //         if (b[i] == c[j])
        //         {
        //             z -= 2;
        //             y -= 2;
        //             q.pb(b[i]);
        //         }
        //     }
        // }

        // for (int i = 0; i < n; i++)
        // {
        //     for (int j = 0; j < n; j++)
        //     {
        //         if (c[i] == a[j])
        //         {
        //             x -= 2;
        //             z -= 2;
        //             r.pb(c[i]);
        //         }
        //     }
        // }

        // ll ps = p.size();
        // ll qs = q.size();
        // ll rs = r.size();
        // for (int i = 0; i < ps; i++)
        // {
        //     for (int j = 0; j < qs; j++)
        //     {
        //         if (p[i] == q[j])
        //         {
        //             for (int k = 0; k < rs; k++)
        //             {
        //                 if (q[j] == r[k])
        //                 {
        //                     x += 1;
        //                     y += 1;
        //                     z += 1;
        //                 }
        //             }
        //         }
        //     }
        // }

        // cout << x << " " << y << " " << z;
        // nl;

        // set<string> ab, bc, ac, abc;

        // fr(n)
        // {
        //     ab.insert(a[i]);
        //     ab.insert(b[i]);

        //     ac.insert(a[i]);
        //     ac.insert(c[i]);

        //     bc.insert(b[i]);
        //     bc.insert(c[i]);

        //     abc.insert(a[i]);
        //     abc.insert(b[i]);
        //     abc.insert(c[i]);
        // }

        // x -= 2 * (2 * n - ab.size());
        // y -= 2 * (2 * n - bc.size());
        // z -= 2 * (2 * n - ac.size());

        // x += abc.size();
        // y += abc.size();
        // z += abc.size();

        // cout << x << " " << y << " " << z;
        // nl;

        // vector<string> abc(a.size() + b.size() + c.size(), "0");
        // vector<string> ab(a.size() + b.size(), "0");
        // vector<string> bc(b.size() + c.size(), "0");
        // vector<string> ac(a.size() + c.size(), "0");

        // set_intersection(all(a), all(b), ab.begin());
        // set_intersection(all(b), all(c), bc.begin());
        // set_intersection(all(a), all(c), ac.begin());
        // set_intersection(all(ab), all(c), abc.begin());
        // // ll x = 0, y = 0, z = 0;

        // // ll k = abc.size();
        // ll abcs = 0, abs = 0, bcs = 0, acs = 0;
        // vector<string>::iterator it = abc.begin();
        // ll lmao = 0;
        // while (abc[lmao] != "0")
        // {
        //     abcs++;
        //     lmao++;
        // }
        // lmao = 0;
        // while (ab[lmao] != "0")
        // {
        //     abs++;
        //     lmao++;
        // }
        // lmao = 0;
        // while (bc[lmao] != "0")
        // {
        //     bcs++;
        //     lmao++;
        // }
        // lmao = 0;
        // while (ac[lmao] != "0")
        // {
        //     acs++;
        //     lmao++;
        // }

        // x -= 2 * (abs + acs);
        // y -= 2 * (abs + bcs);
        // z -= 2 * (acs + bcs);
        // x += abcs;
        // y += abcs;
        // z += abcs;
        // // cout << abs << " " << bcs << " " << acs << " " << abcs;
        // cout << x << " " << y << " " << z;
        // nl;
    }
    return 0;
}
