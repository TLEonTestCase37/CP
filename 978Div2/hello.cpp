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
    vin(v, n);
    sort(all(v));
    ll ans = v[n - 1];
    ll t = x * v[n - 1];
    for (int i = n - 1; i >= 0; i--)
    {
        if (t)
        {
            if (v[i] >= t)
            {
                v[i] = 0;
                t -= v[i];
            }
            else
            {
                v[i] -= t;
                t = 0;
            }
        }
        if (t == 0)
        {
            if (i == 0)
            {
                ans += v[i];
            }
            else
            {
                if (v[i - 1] > v[i])
                {
                    ans = v[i - 1];
                    t = x * v[i - 1];
                    t -= v[i];
                    v[i] = 0;
                }
                else
                {
                    ans += v[i];
                    t = x * v[i];
                    v[i] = 0;
                }
            }
        }
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