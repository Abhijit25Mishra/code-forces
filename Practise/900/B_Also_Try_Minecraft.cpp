#include <bits/stdc++.h>
#define ll long long
using namespace std;
main()
{
    ll n, m;
    cin >> n >> m;
    ll a[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll dp[n + 1] = { 0 };
    ll dp2[n + 1] = { 0 };
    for (ll i = 0; i < n; i++)
    {
        if (i == 0)
        {
            dp[i + 1] = 0;
        }
        else

        {
            if (a[i] < a[i - 1])
            {
                dp[i + 1] = dp[i] + a[i - 1] - a[i];
            }
            else
            {
                dp[i + 1] = dp[i];
            }
        }
    }
    for (ll i = n - 2; i >= 0; i--)
    {
        if (a[i] < a[i + 1])
        {
            dp2[i + 1] = dp2[i + 2] + a[i + 1] - a[i];
        }
        else
            dp2[i + 1] = dp2[i + 2];
    }
    while (m--)
    {
        ll s, t;
        cin >> s >> t;
        if (s < t)
        {
            cout << dp[t] - dp[s] << endl;
        }
        else if (s > t)
        {
            cout << dp2[t] - dp2[s] << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }
}
