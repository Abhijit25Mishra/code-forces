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
void solve()
{
    long long n, i, j = 1000000000, k = 1, f = 1e9 + 7, b = 0, l, r;
    string s;
    cin >> s;
    n = s.size();
    multiset<char> s1;
    for (i = 0; i < n; i += 2)
        s1.insert(s[i]);
    b = n / 2;
    for (auto i : s1)
    {
        cout << i;
        if (b--)
            cout << "+";
    }
    cout << "\n";
}

int main()
{
    solve();

    return 0;
}
