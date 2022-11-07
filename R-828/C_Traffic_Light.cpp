// Aur Bhai Dekhne aagaye ;)
// Author: Abhijit Mishra 
#pragma GCC optimize("Ofast")
#pragma GCC optimize("no-stack-protector")
#pragma GCC optimize("unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,popcnt,abm,mmx,tune=native")
#pragma GCC optimize("fast-math")
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#pragma GCC target("avx,avx2,fma")
#include <bits/stdc++.h>
using namespace std;
#define pi (3.141592653589)
#define mod 1000000007
#define pb push_back
#define is insert
#define mp make_pair
#define ff first
#define ss second
#define all(x) x.begin(), x.end()
#define min3(a, b, c) min(c, min(a, b))
#define min4(a, b, c, d) min(d, min(c, min(a, b)))
#define rfr(n) for(int i=n-1;i>=0;i--)
#define rep1(i,a,b) for(long long i=a;i<=b;i++)
#define fr(n) for(long long i=0;i<n;i++)
#define nesfr(x,y) for(long long i=0;i<x;i++)for(long long j=0;j<y;j++)
#define rep(i,a,b) for(long long i=a;i<b;i++)
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
typedef long long int ll;
typedef long double ld;
typedef vector<ll> vi;
#define nl cout << "\n"
const unsigned int M = 1000000007;
const int  N = 2e5 + 5;


int main()
{
    fast;
    ll t = 1;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        char c;
        cin >> c;

        string a;
        cin >> a;
        a = a + a;
        bool ok = false;
        fr(n)
        {
            if (a[i] != 'g') { ok = true; }
        }
        if (!ok || c == 'g') { cout << 0; nl; }
        else
        {
            vi b(n, 0);
            ll left = 0, right = 0;
            while (left != n)
            {
                if (left == right && a[left] == 'g')
                {
                    b[left] = 0;
                    left++;
                    right++;
                }
                if (a[right] != 'g')
                {
                    right++;
                }
                else if (right > left)
                {
                    b[left] = right - left;
                    left++;
                }
                else
                {
                    right++;
                }
            }


            ll my = 0, mr = 0;
            fr(n)
            {
                if (a[i] == 'y')
                    my = max(my, b[i]);
                else if (a[i] == 'r')
                    mr = max(mr, b[i]);
            }
            if (c == 'r') { cout << mr; }
            else if (c == 'y') { cout << my; }
            nl;
        }
    }
    return 0;
}
