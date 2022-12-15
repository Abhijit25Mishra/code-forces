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
int n;
int arr[1000000];


int solve(int i, long long h, int s2, int s3)
{
    if (i == n) return 0;
    if (arr[i] < h)
        return solve(i + 1, h + (arr[i] / 2), s2, s3) + 1;
    int ans1 = (s2 ? solve(i, h * 2, s2 - 1, s3) : 0);
    int ans2 = (s3 ? solve(i, h * 3, s2, s3 - 1) : 0);
    return max(ans1, ans2);
}

int main()
{
    fast;
    ll t = 1;
    cin >> t;
    while (t--)
    {

        long long h; cin >> n >> h;
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        sort(arr, arr + n);
        cout << solve(0, h, 2, 1) << endl;
    }
    if (0)
    {
        while (t--)
        {
            ll n, h;
            cin >> n >> h;
            deque<ll> a(n);
            fr(n) { cin >> a[i]; }
            sort(all(a));
            ll k = 0;
            ll j = 0;
            ll ans = 0;
            ll s = h;
            deque <ll> x = a;
            while (!a.empty() && k < 3)
            {
                if (a.front() < h)
                {
                    h += a.front() / 2;
                    a.pop_front();
                }
                else if (k == 0 && j < 3)
                {
                    if (j == 0) { h *= 2; j++; }
                    else if (j == 1) { h *= 2; j++; }
                    else if (j == 2) { h *= 3; j++; }
                }
                else if (k == 1 && j < 3)
                {
                    if (j == 0) { h *= 2; j++; }
                    else if (j == 1) { h *= 3; j++; }
                    else if (j == 2) { h *= 2; j++; }
                }
                else if (k == 2 && j < 3)
                {
                    if (j == 0) { h *= 3; j++; }
                    else if (j == 1) { h *= 2; j++; }
                    else if (j == 2) { h *= 2; j++; }
                }
                else
                {
                    ll z = a.size();
                    ans = max(ans, n - z);
                    a = x;
                    j = 0;
                    h = s;
                    k++;
                }
            }
            if (a.empty()) { cout << n; }
            else { cout << ans; }
            nl;
        }
    }
    return 0;
}
