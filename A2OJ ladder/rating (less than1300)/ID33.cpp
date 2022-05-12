#include <bits/stdc++.h>
using namespace std;
#define pi (3.141592653589)
#define mod 1000000007
#define pb push_back
#define is insert
#define ff first
#define ss second
#define all(x) x.begin(), x.end()
#define min3(a, b, c) min(c, min(a, b))
#define min4(a, b, c, d) min(d, min(c, min(a, b)))
#define rfr(n) for (int i = n - 1; i >= 0; i--)
#define rep1(i, a, b) for (long long i = a; i <= b; i++)
#define fr(n) for (long long i = 0; i < n; i++)
#define nesfr(x, y)                   \
    for (long long i = 0; i < x; i++) \
        for (long long j = 0; j < y; j++)
#define rep(i, a, b) for (long long i = a; i < b; i++)
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
typedef long long int ll;
typedef long double ld;
typedef vector<ll> vi;

int main()
{
    fast;
    ll n, res = 0;
    cin >> n;
    vector<pair<ll, ll>> A(n);
    for (int i = 0; i < n; i++)
    {
        cin >> A[i].first >> A[i].second;
    }
    for (int i = 0; i < n; i++)
    {

        int le = 0, ri = 0, up = 0, lo = 0;

        for (int j = 0; j < n; j++)
        {
            if ((A[j].first > A[i].first) && (A[j].second == A[i].second))
            {
                ri++;
            }
            else if ((A[j].first < A[i].first) && (A[j].second == A[i].second))
            {
                le++;
            }
            else if ((A[j].first == A[i].first) && (A[j].second < A[i].second))
            {
                lo++;
            }
            else if ((A[j].first == A[i].first) && (A[j].second > A[i].second))
            {
                up++;
            }
        }
        if (le && ri && up && lo)
        {
            res++;
        }
    }

    // for (int i = 0; i < t; i++)
    // {
    //     ll t = 0, b = 0, l = 0, r = 0;
    //     for (int j = 0; j < t; j++)
    //     {
    //         if (x[i] == x[j])
    //         {
    //             if (y[j] > y[i])
    //             {
    //                 t++;
    //                 cout << endl
    //                      << x[j] << " " << y[j] << " " << x[i] << " " << x[j];
    //             }
    //             else if (y[j] < y[i])
    //             {
    //                 b++;
    //                 cout << endl
    //                      << x[j] << " " << y[j] << " " << x[i] << " " << x[j];
    //             }
    //         }
    //         if (y[i] == y[j])
    //         {
    //             if (x[j] > x[i])
    //             {
    //                 r++;
    //                 cout << endl
    //                      << x[j] << " " << y[j] << " " << x[i] << " " << x[j];
    //             }
    //             else if (x[j] < x[i])
    //             {
    //                 l++;
    //                 cout << endl
    //                      << x[j] << " " << y[j] << " " << x[i] << " " << x[j];
    //             }
    //         }
    //         if (l && r && b && t)
    //         {
    //             k++;
    //         }
    //     }
    // }
    cout << res;
    return 0;
}
