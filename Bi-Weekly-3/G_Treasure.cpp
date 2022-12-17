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
    vi prea(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (i != 0)
        {
            prea[i] = a[i] + prea[i - 1];
        }
        else
        {
            prea[0] = a[0];
        }
    }


    vi b = a;
    sort(all(b));
    vi preb(n);
    preb[0] = b[0];
    for (int i = 0; i < n; i++)
    {
        if (i != 0)
            preb[i] = b[i] + preb[i - 1];
    }

    ll q;
    cin >> q;
    while (q--)
    {
        ll x, y, z;
        cin >> x >> y >> z;

        if (x == 1)
        {
            cout << prea[z - 1] - prea[y - 1] + a[y - 1];
            nl;
        }
        else if (x == 2)
        {
            cout << preb[z - 1] - preb[y - 1] + b[y - 1];
            nl;
        }
    }
    return 0;
}