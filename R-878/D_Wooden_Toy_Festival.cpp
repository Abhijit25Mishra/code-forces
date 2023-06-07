
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

namespace internal {

    // @param n `0 <= n`
    // @return minimum non-negative `x` s.t. `n <= 2**x`
    int ceil_pow2(int n)
    {
        int x = 0;
        while ((1U << x) < (unsigned int)(n)) x++;
        return x;
    }

    // @param n `1 <= n`
    // @return minimum non-negative `x` s.t. `(n & (1 << x)) != 0`
    constexpr int bsf_constexpr(unsigned int n)
    {
        int x = 0;
        while (!(n & (1 << x))) x++;
        return x;
    }

    // @param n `1 <= n`
    // @return minimum non-negative `x` s.t. `(n & (1 << x)) != 0`
    int bsf(unsigned int n)
    {
#ifdef _MSC_VER
        unsigned long index;
        _BitScanForward(&index, n);
        return index;
#else
        return __builtin_ctz(n);
#endif
    }

}

template <class S, S(*op)(S, S), S(*e)()> struct segtree {
    public:

    // default constructor
    segtree() : segtree(0) {}

    // only when size is known , all elements initalized to e()
    explicit segtree(int n) : segtree(std::vector<S>(n, e())) {}

    // building segtree from a vector the extra elements are all defined as e()
    explicit segtree(const std::vector<S> &v) : _n(int(v.size()))
    {
        log = internal::ceil_pow2(_n);
        size = 1 << log;
        d = std::vector<S>(2 * size, e());
        for (int i = 0; i < _n; i++) d[size + i] = v[i];
        for (int i = size - 1; i >= 1; i--)
        {
            update(i);
        }
        cout << "d" << d;
        nl;
    }

    // It assigns x to a[p].
    void set(int p, S x)
    {
        assert(0 <= p && p < _n);
        p += size;
        d[p] = x;
        for (int i = 1; i <= log; i++) update(p >> i);
    }

    // returns the value of a[p]
    S get(int p) const
    {
        assert(0 <= p && p < _n);
        return d[p + size];
    }

    // It returns op(a[l], ..., a[r - 1]), 
    // assuming the properties of the monoid.
    // It returns e() if l = rl = r.

    S prod(int l, int r) const
    {
        assert(0 <= l && l <= r && r <= _n);
        S sml = e(), smr = e();
        l += size;
        r += size;

        while (l < r)
        {
            if (l & 1) sml = op(sml, d[l++]);
            if (r & 1) smr = op(d[--r], smr);
            l >>= 1;
            r >>= 1;
        }
        return op(sml, smr);
    }

    S all_prod() const { return d[1]; }

    template <bool (*f)(S)> int max_right(int l) const
    {
        return max_right(l, [](S x) { return f(x); });
    }
    template <class F> int max_right(int l, F f) const
    {
        assert(0 <= l && l <= _n);
        assert(f(e()));
        if (l == _n) return _n;
        l += size;
        S sm = e();
        do
        {
            while (l % 2 == 0) l >>= 1;
            if (!f(op(sm, d[l])))
            {
                while (l < size)
                {
                    l = (2 * l);
                    if (f(op(sm, d[l])))
                    {
                        sm = op(sm, d[l]);
                        l++;
                    }
                }
                return l - size;
            }
            sm = op(sm, d[l]);
            l++;
        } while ((l & -l) != l);
        return _n;
    }

    template <bool (*f)(S)> int min_left(int r) const
    {
        return min_left(r, [](S x) { return f(x); });
    }
    template <class F> int min_left(int r, F f) const
    {
        assert(0 <= r && r <= _n);
        assert(f(e()));
        if (r == 0) return 0;
        r += size;
        S sm = e();
        do
        {
            r--;
            while (r > 1 && (r % 2)) r >>= 1;
            if (!f(op(d[r], sm)))
            {
                while (r < size)
                {
                    r = (2 * r + 1);
                    if (f(op(d[r], sm)))
                    {
                        sm = op(d[r], sm);
                        r--;
                    }
                }
                return r + 1 - size;
            }
            sm = op(d[r], sm);
        } while ((r & -r) != r);
        return 0;
    }

    private:
    int _n, size, log;
    std::vector<S> d;

    void update(int k) { d[k] = op(d[2 * k], d[2 * k + 1]); }

};

ll op(ll a, ll b)
{
    return abs(a - b);
}

ll e()
{
    return (ll)0;
}

void solve()
{
    ll n;
    cin >> n;
    vi a(n);
    cin >> a;
    sort(all(a));
    a.resize(unique(all(a)) - a.begin());

    ll l = -1, r = 1e9;

    while (r - l > 1)
    {
        ll i = 0, j = n - 1;

        int m = (l + r) >> 1;
        while (i + 1 < a.size() && a[i + 1] - a[0] <= 2 * m)
        {
            i++;
        }
        while (j - 1 >= 0 && a.back() - a[j - 1] <= 2 * m)
        {
            j--;
        }
        i++; j--;
        if (i > j || a[j] - a[i] <= 2 * m)
        {
            r = m;

        }
        else
        {
            l = m;
        }
    }
    cout << r;
    nl;

    // cout << a;
    // nl;
    // segtree<ll, op, e> seg(a);
    // cout << seg.prod(1, 2);
    // nl;

    // set<ll> s;
    // fr(n)
    // {
    //     s.insert(a[i]);
    // }
    // if (s.size() <= 3)
    // {
    //     cout << 0;
    // }
    // else
    // {
    // }




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

