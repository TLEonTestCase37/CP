#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long
#define pii pair<int, int>
#define all(v) v.begin(), v.end()
#define read(n)  \
    long long n; \
    cin >> n;
#define umap unordered_map
#define vin(v, n)               \
    vector<long long> v(n);     \
    for (int i = 0; i < n; i++) \
    {                           \
        cin >> v[i];            \
    }
#define endl "\n"
#define tezi_se_karo         \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    std::cout.tie(0);
#define tab " "
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;

void solve()
{
    read(n);
    read(m);
    vin(a,n);
    vin(b,m);
    long long g = 0;
    for (int i = 1; i < n; i++)
    {
        g = __gcd(g, abs(a[i] - a[0]));
    }
    for (int i = 0; i < m; i++)
    {
        cout << __gcd(g, a[0] + b[i]) << tab;
    }
}

int32_t main()
{
    tezi_se_karo
    solve();

    return 0;
}