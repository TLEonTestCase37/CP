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
    vector<pair<int, pii>> v;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int a;
            cin >> a;
            v.pb({a, {i + 1, j}});
        }
    }
    sort(all(v));
    vector<bool> used(n, false);
    vector<int> t(n);
    for (int i = n * n - 1; i >= 0; i--)
    {
        if (!used[v[i].second.second])
        {
            used[v[i].second.second] = true;
            t[v[i].second.second] = v[i].second.first;
        }
    }
    for (int i = 0; i < n; i++)
        cout << t[i] << tab;
    cout << endl;
}

int32_t main()
{
    // precalc();
    tezi_se_karo
    solve();

    return 0;
}