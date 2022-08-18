#include <bits/stdc++.h>
#include <algorithm>
#include <queue>
#include <vector>
#include <map>
using namespace std;
int a[200005], z[200005], ans[200005];
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        queue<int> d;
        for (int i = 1; i <= n; i++)
            cin >> a[i], ans[i] = 0, z[a[i]] = i, d.push(a[i]);
        int x = d.front();
        d.pop();
        while (!d.empty())
        {
            int y = d.front();
            d.pop();
            if (x < y)
            {
                ans[z[y]]++;
                x = y;
            }
            else
            {
                ans[z[x]]++;
            }
        }
        while (q--)
        {
            int i, k;
            cin >> i >> k;
            if (a[i] == n)
            {
                cout << max(0, k - max(0, i - 2)) << '\n';
            }
            else
            {
                cout << max(0, min(k, ans[i] + max(0, i - 2)) - max(0, i - 2)) << '\n';
            }
        }
    }
}