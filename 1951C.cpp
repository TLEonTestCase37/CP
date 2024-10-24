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
    read(k);
    int days = k / m + (k % m ? 1 : 0);
    vector<pii> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first;
        v[i].second = i;
    }
    sort(all(v));
    int j = n - 1;
    days--;
    while (j != days)
    {
        v.pop_back();
        j--;
    }
    ll inc = 0;
    ll ans = 0;
    for (auto [a, b] : v)
    {
        ll x = min(k, m);
        k -= x;
        ans += x * (a + inc);
        inc += x;
    }
    cout << ans << endl;
}

int32_t main()
{
    // precalc();
    tezi_se_karo int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}