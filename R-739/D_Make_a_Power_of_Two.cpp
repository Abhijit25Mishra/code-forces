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
        string s = to_string(n);
        long long int x = 1000000000000000000;
        long long int i;
        for (i = 1; i <= 1000000000000000000; i = i * 2)
        {
            string t = to_string(i);
            long long int sub = 0;
            long long int k = 0, c = 0;
            for (long long int j = 0; j < s.length(); j++)
            {
                if (s[j] == t[k] && k < t.length())
                {
                    k++;
                    c++;
                }
            }
            long long int y = s.length() - c + t.length() - c;
            x = min(y, x);
        }
        cout << x << endl;
    }
    return 0;
}
