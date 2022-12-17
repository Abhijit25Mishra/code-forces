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
        ll n;
        cin >> n;
        vi a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        if (is_sorted(all(a))) { cout << 0; }
        else
        {
            ll ans = 0;
            ll l = 0, r = n - 1;
            while (l != r)
            {
                if (a[l] == 0) { l++; }
                else if (a[r] == 1) { r--; }
                else if (a[l] == 1 && a[r] == 0)
                {
                    a[l] = 0;
                    a[r] = 1;
                    ans++;
                }
            }
            if (is_sorted(all(a))) { cout << ans; }
        }
        nl;

    }
    return 0;
}
