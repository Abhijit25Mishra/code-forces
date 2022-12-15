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
        ll inc = 0;
        ll suma = 0, sumb = 0;
        vi a(n), b(n);
        for (int i = 0; i < n; i++) { cin >> a[i]; suma += a[i]; }
        for (int i = 0; i < n; i++) { cin >> b[i]; sumb += b[i]; }
        for (int i = 0; i < n; i++) { if (a[i] != b[i]) { inc++; } }
        if (suma == sumb)
        {
            (inc == 0) ? cout << "0" : cout << "1";
        }
        else
        {
            cout << min(abs(suma - sumb) + 1, inc);
        }
        nl;

    }
    return 0;
}
