#include<bits/stdc++.h>
using namespace std;
#define int long long
#define rapido ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define endl "\n"


void solve()
{
    int n; int l; int r; cin >> n >> l >> r;
    vector<int>arr(n);
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    int ans = 0;
    for (int i = 0; i < n; i++)
        ans += lower_bound(arr.begin(), arr.begin() + i, l - arr[i]) - upper_bound(arr.begin(), arr.begin() + i, r - arr[i]);

    cout << abs(ans) << endl;

}

int32_t main()
{
    rapido;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}

