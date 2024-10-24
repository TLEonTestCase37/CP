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
    read(k);
    vin(v, n);
    if (k > 2)
        cout << 0 << endl;
    else if (k == 2)
    {
        sort(all(v));
        ll d = v[0];
        for (int i = 0; i < n - 1; i++)
            d = min(d, v[i + 1] - v[i]);

        for (int i = 0; i < n; i++)
            for (int j = 0; j < i; j++)
            {
                ll t = v[i] - v[j];
                ll p = lower_bound(begin(v), end(v), t) - begin(v);
                if (p < n)
                    d = min(d, v[p] - t);
                if (p > 0)
                    d = min(d, t - v[p - 1]);
            }
        cout << d << endl;
    }
    else
    {
        sort(all(v));
        ll ans = v[0];
        for (int i = 1; i < n; i++)
        {
            ans = min(ans, v[i] - v[i - 1]);
        }
        cout << ans << endl;
    }
}

int32_t main()
{
    tezi_se_karo int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}