// Aur Bhai Dekhne aagaye ;)
// Author: Abhijit Mishra 
#include <bits/stdc++.h>
using namespace std;


#define nl cout << "\n"
#define all(x) x.begin(), x.end()
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);


typedef long long int ll;
typedef vector<ll> vi;


bool ispal(vector<ll> a)
{
    bool ok = true;
    ll n = a.size();
    for (int i = 0; i < n; i++)
    {
        if (a[i] != a[n - 1 - i])
        {
            ok = false;
        }
    }
    return ok;
}


int main()
{
    fast;
    ll n;
    cin >> n;

    vi a(n);
    ll cnt = 0;
    bool ok = false;
    bool ama = true;

    for (int i = 0; i < n; i++) { cin >> a[i]; }
    int l = 0;
    while (l + 1 < n && a[l] < a[l + 1])
    {
        ++l;
    }
    int r = l + 1;
    while (r < n && a[r] < a[r - 1])
    {
        ++r;
    }
    reverse(a.begin() + l, a.begin() + r);
    for (int i = 1; i < n; ++i)
    {
        if (a[i] < a[i - 1])
        {
            puts("no");
            return 0;
        }
    }

    cout << "yes\n";

    cout << l + 1 << " " << r;

    return 0;
}
