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
    int dp1[n + 1][m + 1];
    int dp2[n + 1][m + 1];
    vin(v, n);
    int t1 = 0;
    int t2 = 0;
    for (int i = 0; i < n; i++)
    {
        t1 += (v[i] > 0);
        t2 += (v[i] < 0);
    }
    dp1[n][m] = t1;
    dp2[n][m] = t2;
    for (int i = n - 1; i >= 0; i--)
    {
        if()
    }
}

int32_t main()
{
    // precalc();
    tezi_se_karo
    solve();

    return 0;
}