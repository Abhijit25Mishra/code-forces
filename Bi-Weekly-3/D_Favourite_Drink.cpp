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

    ll n;
    cin >> n;
    vi a(n);
    for (int i = 0; i < n; i++) { cin >> a[i]; }
    sort(all(a));
    ll q;
    cin >> q;

    while (q--)
    {
        ll k;
        cin >> k;
        cout << upper_bound(all(a), k) - a.begin();
        nl;
    }

    return 0;
}
