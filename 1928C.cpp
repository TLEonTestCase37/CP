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

unordered_set<int> solve(int a)
{
    unordered_set<int> tmp;
    for (int i = 1; i <= sqrt(a); i++)
    {
        if (a % i == 0)
        {
            if (i % 2 == 0)
                tmp.insert(i);
            if ((a / i) % 2 == 0)
                tmp.insert(a / i);
        }
    }
    unordered_set<int> yes;
    for (auto it : tmp)
    {
        yes.insert(1 + it / 2);
    }
    return yes;
}

void solve()
{
    read(n);
    read(x);
    unordered_set<int> tmp = solve(n - x);
    for (auto it : solve(n + x - 2))
    {
        tmp.insert(it);
    }
    int ans = 0;
    for (auto it : tmp)
    {
        if (it >= x)
        {
            ans++;
        }
    }
    cout << ans << endl;
    // cout << endl;
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