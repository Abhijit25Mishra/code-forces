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
        int n;
        cin >> n;
        int a[n];
        fr(n) { cin >> a[i]; }
        string s;
        cin >> s;
        vector<pair<int, int>> v, vv;
        fr(n)
        {
            if (s[i] == '0')
            {
                v.emplace_back(a[i], i);
            }
            else
            {
                vv.emplace_back(a[i], i);
            }
        }
    }
    sort(v.begin(), v.end());
    sort(vv.begin(), vv.end());

    int ans[n], cur = 1;

    for (int i = 0; i < v.size(); i++)
    {
        ans[v[i].second] = cur;
        cur++;
    }
    for (int i = 0; i < vv.size(); i++)
    {
        ans[vv[i].second] = cur;
        cur++;
    }
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
    cout << "\n";

    return 0;
}
