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

    for (int i = 0; i < n; i++)
    {

        int t = 0;
        int m = n / 2;
        if (i > m) t = i - m;
        else t = m - i;
        for (int j = 0; j < t; j++) { cout << '*'; };
        for (int j = 0; j < n - t - t; j++) { cout << "D"; }
        for (int j = 0; j < t; j++) { cout << '*'; };
        nl;
    }

    return 0;
}
