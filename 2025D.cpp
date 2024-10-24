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
    int dp[m + 1][m + 1];
    memset(dp, 0, sizeof(dp[0][0]) * (m + 1) * (m + 1));
    vin(r, n);
    vector<int> v1, v2;
    int t = 0;
    for (int i = 0; i < n; i++)
    {
        if (r[i] == 0)
        {
            t++;
            sort(all(v1));
            sort(all(v2));
            for (int j = 0; j <= t; j++)
            {
                if (j != 0)
                {
                    int val = upper_bound(all(v1), j - 1) - v1.begin() + upper_bound(all(v2), t - j) - v2.begin();
                    dp[t][j] = max(dp[t][j], dp[t - 1][j - 1] + val);
                }
                if (j < t)
                {
                    int val = upper_bound(all(v1), j) - v1.begin() + upper_bound(all(v2), t - j - 1) - v2.begin();
                    dp[t][j] = max(dp[t][j], dp[t - 1][j] + val);
                }
            }
            v1.clear();
            v2.clear();
        }
        else if (r[i] < 0)
            v2.pb(abs(r[i]));
        else
            v1.pb(abs(r[i]));
    }

    sort(all(v1));
    sort(all(v2));
    int ans = 0;
    for (int j = 0; j <= m; j++)
    {
        int val = upper_bound(all(v1), j) - v1.begin() + upper_bound(all(v2), m - j) - v2.begin();
        ans = max(ans, dp[m][j] + val);
    }
    cout << ans << endl;
}

int32_t main()
{
    // precalc();
    tezi_se_karo
    solve();

    return 0;
}