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

        vi a(n), b(n);
        vi c(n), d(n);
        vi x(n);
        for (int i = 0; i < n; i++) { cin >> a[i]; }
        for (int i = 0; i < n; i++) { cin >> b[i]; }
        ll j = 0;
        for (int i = 0; i < n; i++)
        {
            while (b[j] < a[i])
            {
                j++;
            }
            if (b[j] > a[i])
            {
                c[i] = b[j] - a[i];
            }
        }

        x[n - 1] = b[n - 1];
        for (int i = n - 1; i >= 0; i--)
        {
            if (b[i] >= a[i + 1])
            {
                if (i == n - 2)
                {
                    x[i] = b[i + 1];
                }
                else
                {
                    x[i] = x[i + 1];
                }
            }
            else
            {
                x[i] = b[i];
            }
        }

        for (int i = 0; i < n; i++)
        {
            d[i] = x[i] - a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cout << c[i] << " ";
        }
        nl;
        for (int i = 0; i < n; i++)
        {
            cout << d[i] << " ";
        }
        nl;
    }
    return 0;
}