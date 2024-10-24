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
    read(x);
    vin(a, n);
    int ans = 0;
    while (true)
    {
        vector<ll> p;
        set<ll> t;
        for (int j = 0; j < x; j++)
        {
            int mp = -1;
            int m = 0;
            for (int i = 0; i < n; i++)
            {
                if (t.count(i) || a[i] == 0)
                    continue;
                if (a[i] > m)
                {
                    mp = i;
                    t.insert(i);
                    m = a[i];
                }
            }
            if (m == 0)
                break;

            p.push_back(mp);
        }
        if (p.empty())
            break;
        ans++;
        for (int i = 0; i < p.size(); i++)
            a[p[i]]--;
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