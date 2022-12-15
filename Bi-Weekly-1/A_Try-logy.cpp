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
    ll a, b, c;
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b >> c;
        if (a + b + c >= 2)
        {
            ans++;
        }
    }
    cout << ans;
    nl;

    return 0;
}
