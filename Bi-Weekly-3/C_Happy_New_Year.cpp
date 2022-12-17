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
    ll n, k;
    cin >> n >> k;
    int x = (240 - k);
    ll ans = -1;
    for (int i = 1; i <= n; i++)
    {
        if (x >= 5 * i)
        {
            x -= 5 * i;
            ans = i;
        }
        else { break; }
    }
    cout << ans;
    nl;
    return 0;
}
