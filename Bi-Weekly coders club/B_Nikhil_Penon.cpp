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
    ll n = 1;
    cin >> n;
    vi a(n);
    ll even = 0, odd = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] & 1) { odd++; }
        else { even++; }
    }
    if (odd & 1)
    {
        cout << odd;
    }
    else
    {
        cout << even;
    }
    nl;

    return 0;
}
