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
        string s;
        cin >> s;
        bool ans = true;
        for (int i = 0; i < s.length(); i++)
        {
            if ((i == 0 || s[i] != s[i - 1]) && (i == s.length() - 1 || s[i] != s[i + 1]))
            {
                ans = false;
            }
        }
        ans ? cout << "YES" : cout << "NO";
        nl;
    }
    return 0;
}
