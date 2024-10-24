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

map<int, int> parent;
vector<vector<int>> v(2e5 + 10);
vector<bool> vis(2e5 + 10, false);
vector<int> cyc;
int f = -1;
void cycle(int a)
{
    vis[a] = true;
    for (int i : v[a])
    {
        if (!vis[i])
        {
            parent[i] = a;
            cycle(i);
        }
    }
}

void solve()
{
    read(n);
    read(a);
    read(b);
    for (int i = 1; i <= n; i++)
    {
        vis[i] = false;
        v[i].clear();
    }
    for (int i = 0; i < n; i++)
    {
        read(x);
        read(y);
        v[x].pb(y);
        v[y].pb(x);
    }
    cycle(1);
    for (int i : cyc)
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