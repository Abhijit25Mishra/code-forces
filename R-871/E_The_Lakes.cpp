
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
#ifndef ONLINE_JUDGE
#define debug(x) cerr<<#x<<" "; _print(x); cerr<<endl;
#else 
#define debug(x)
#endif
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


//Input Output Template
template <typename T> istream &operator>>(istream &istream, vector<T> &v) { for (auto &it : v)cin >> it; return istream; } //input vector<int> v by cin>>v;
template <typename T1, typename T2> istream &operator>>(istream &istream, pair<T1, T2> &p) { return (istream >> p.first >> p.second); } // input pair<int,int> p by cin>>p;
template <typename T1, typename T2> ostream &operator<<(ostream &ostream, const pair<T1, T2> &p) { return (ostream << p.first << " " << p.second); }//output pair<int,int> p by cin>>p;
template <typename T> ostream &operator<<(ostream &ostream, const vector<T> &c) { for (auto &it : c)cout << it << " "; return ostream; } //output vector<int> v by cin>>v;

//Debugger Function
void _print(ll t) { cerr << t; }
void _print(string t) { cerr << t; }
void _print(char t) { cerr << t; }
void _print(double t) { cerr << t; }
void _print(int t) { cerr << t; }

//Debugger Template
template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) { cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}"; }
template <class T> void _print(vector <T> v) { cerr << "[ "; for (T i : v) { _print(i); cerr << " "; } cerr << "]"; }
template <class T> void _print(set <T> v) { cerr << "[ "; for (T i : v) { _print(i); cerr << " "; } cerr << "]"; }
template <class T> void _print(multiset <T> v) { cerr << "[ "; for (T i : v) { _print(i); cerr << " "; } cerr << "]"; }
template <class T, class V> void _print(map <T, V> v) { cerr << "[ "; for (auto i : v) { _print(i); cerr << " "; } cerr << "]"; }

int maxAreaOfIsland(vector<vector<int>> &grid)
{
    int ans = 0;
    int r = grid.size(), c = grid[0].size();
    vector<vector<bool>> vis(r, vector(c, false));
    int dir_x[] = { 0,0,1,-1 };
    int dir_y[] = { 1,-1,0,0 };
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (grid[i][j] == 0 || vis[i][j])
                continue;
            queue<pair<int, int>> q;
            int island = 0;
            q.push({ i,j });
            vis[i][j] = true;
            while (!q.empty())
            {
                auto front = q.front();
                q.pop();
                // island++ ;
                island += grid[front.first][front.second];
                for (int d = 0; d < 4; d++)
                {
                    int qr = front.first + dir_x[d];
                    int qc = front.second + dir_y[d];
                    if (qr < 0 || qr >= r || qc < 0 || qc >= c)
                    {
                        continue;
                    }
                    if (grid[qr][qc] == 0) continue;
                    if (vis[qr][qc]) continue;
                    q.push({ qr,qc });
                    vis[qr][qc] = true;
                }
            }
            ans = max(ans, island);
        }
    }
    return ans;
}

void solve()
{
    int n, m;
    cin >> n >> m;

    vector<vector<int>> mat(n, vector<int>(m, 0));

    cin >> mat;

    cout << maxAreaOfIsland(mat);

    nl;


}
int main()
{
    fast;
    ll t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}

