#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const LL mod = 1e9 + 7;
const int N = 1e5 + 6;
const int inf = 0x3f3f3f3f;
const double PI = acos(-1.0);
int main()
{
    double d, h, v, e;
    cin >> d >> h >> v >> e;
    d = d / 2;
    double ans = (PI * d * d * h) / (v - PI * d * d * e);
    if (PI * d * d * e > v)cout << "NO" << "\n";
    else
    {
        cout << "YES" << "\n";
        printf("%.12lf", ans);
    }

    return 0;
}