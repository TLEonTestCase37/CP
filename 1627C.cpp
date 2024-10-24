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
    vector<vector<int>> v(n + 1);
    vector<int> ans(n-1);
    map<pii, int> mpp;
    for (int i = 0; i < n - 1; i++)
    {
        read(a);
        read(b);
        v[a].pb(b);
        v[b].pb(a);
        mpp[{a, b}] = i;
        mpp[{b, a}] = i;
    }
    int t = 1;
    for (int i = 1; i <= n; i++)
    {
        if (v[i].size() == 1)
        {
            t = i;
            break;
        }
    }
    vector<bool> used(n + 1, false);
    queue<pii> q;
    q.push({t, 2});
    used[t] = true;
    while (!q.empty())
    {
        auto [a, b] = q.front();
        q.pop();
        if (v[a].size() > 2)
        {
            cout << -1 << endl;
            return;
        }
        for (int i : v[a])
        {
            if (!used[i])
            {
                used[i] = true;
                ans[mpp[{a, i}]] = b;
                q.push({i, 7 - b});
            }
        }
    }
    for (int i : ans)
        cout << i << tab;
    cout << endl;
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