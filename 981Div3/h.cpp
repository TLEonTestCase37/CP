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

vector<int> ans(101);

void precalc()
{
    bool f = true;
    int t = 0;
    for (int i = 1; i <= 100; i++)
    {
        if (f)
            ans[i] = 1;
        else
            ans[i] = 0;
        t++;
        if (t == 3)
        {

            f = !f;
            t = 0;
        }
    }
}

void solve()
{
    read(n);
    cout << (ans[n] ? "Kosuke":"Sakurako") << endl;
}

int32_t main()
{
    precalc();
    tezi_se_karo int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}