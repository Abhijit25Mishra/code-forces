// Aur Bhai Dekhne aagaye ;)
// Author: Abhijit Mishra 
#include <bits/stdc++.h>
using namespace std;


#define nl cout << "\n"
#define all(x) x.begin(), x.end()
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);


typedef long long int ll;
typedef vector<ll> vi;


int main()
{
    fast;
    ll t = 1;
    cin >> t;
    while (t--)
    {
        int n; cin >> n;
        vi a;

        for (int i = 0; i < n; i++)
        {
            ll x; cin >> x;
            a.push_back(x);
        }

        ll ans = INT64_MIN;

        sort(all(a));

        for (int i = 0; i < 6; i++)
        {
            ll cur = 1;
            for (int x = 0; x < i; x++)
            {
                cur *= a[x];
            }
            for (int x = 0; x < 5 - i; x++)
            {
                cur *= a[n - 1 - x];
            }
            ans = max(ans, cur);
        }

        cout << ans;
        nl;
        // ll n;
        // cin >> n;
        // ll zero = 0;
        // vi pos, neg;
        // for (int i = 0; i < n; i++)
        // {
        //     ll temp;
        //     cin >> temp;
        //     if (temp > 0) { pos.push_back(temp); }
        //     else if (temp < 0) { pos.push_back(temp); }
        //     else { zero++; }
        // }

    }
    return 0;
}
