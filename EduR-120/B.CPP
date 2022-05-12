#include <bits/stdc++.h>
using namespace std;

#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define JUGAD                         \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
#define ll long long
#define ld long double
const int N = 1e5 + 1;
const int MOD = 1e9 + 7;

int main()
{
    FAST;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int ar[n];
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        string s;
        cin >> s;
        vector<pair<int, int>> v, vv;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                v.emplace_back(ar[i], i);
            }
            else
            {
                vv.emplace_back(ar[i], i);
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
    }
}