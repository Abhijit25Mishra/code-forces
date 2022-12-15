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
        set <ll>a;
        for (int i = 0; i < n; i++)
        {
            ll temp;
            cin >> temp;
            a.insert(temp);
        }
        if (a.size() == n)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
        nl;

    }
    return 0;
}
