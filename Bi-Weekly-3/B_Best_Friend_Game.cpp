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
    deque<ll> a(n);
    for (int i = 0; i < n; i++) { cin >> a[i]; }
    ll one = 0, two = 0;
    while (!a.empty())
    {
        if (a.front() > a.back())
        {
            one += a.front();
            a.pop_front();
        }
        else
        {
            one += a.back();
            a.pop_back();
        }
        if (!a.empty())
        {
            if (a.front() > a.back())
            {
                two += a.front();
                a.pop_front();
            }
            else
            {
                two += a.back();
                a.pop_back();
            }
        }

    }
    cout << one << " " << two;
    nl;

    return 0;
}
