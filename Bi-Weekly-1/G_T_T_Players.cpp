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
        ll x1, p1, x2, p2;
        cin >> x1 >> p1 >> x2 >> p2;

        ll mi = min(p1, p2);
        p1 -= mi;
        p2 -= mi;
        if (p1 >= 7)
        {
            cout << ">";
            nl;
        }
        else if (p2 >= 7)
        {
            cout << "<";
            nl;
        }
        else
        {
            for (int i = 0; i < p1; i++) { x1 *= 10; }
            for (int i = 0; i < p2; i++) { x2 *= 10; }
            if (x1 > x2)
            {
                cout << ">";
                nl;
            }
            else if (x2 > x1)
            {
                cout << "<";
                nl;
            }
            else
            {
                cout << "=";
                nl;
            }
        }
    }
    return 0;
}
