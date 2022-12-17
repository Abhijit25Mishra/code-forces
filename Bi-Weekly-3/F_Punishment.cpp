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
    string s;
    cin >> s;
    ll z = s.length();
    vi a(z);
    for (int i = 0; i < z; i++)
    {
        if (i == 0) { a[i] = 0; }
        else if (s[i] == s[i - 1]) { a[i] = a[i - 1] + 1; }
        else { a[i] = a[i - 1]; }
    }
    ll n;
    cin >> n;
    while (n--)
    {
        ll x, y;
        cin >> x >> y;
        cout << a[y - 1] - a[x - 1];
        nl;
    }
    return 0;
}
