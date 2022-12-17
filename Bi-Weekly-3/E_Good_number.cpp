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
        vi a(10000);
        for (long long i = 1; i < 10000; i++)
        {
            a[i] = i * i * i;
        }
        bool ok = false;
        ll i = 0;
        if (binary_search(all(a), n)) { cout << "NO"; }
        else
        {
            while (!ok && i < 9999)
            {
                ll temp = n - a[i];
                ok = binary_search(all(a), temp);
                i++;
            }
            if (ok) { cout << "YES"; }
            else { cout << "NO"; }
        }nl;

    }
    return 0;
}
