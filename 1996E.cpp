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
    string s;
    cin >> s;
    int n = s.length();
    vector<int> v(n);
    int mod = 1e9 + 7;
    int ans = 0;
    map<int, pii> mpp;
    for (int i = 0; i < n; i++)
    {
        v[i] = (s[i] == '1' ? 1 : -1);
    }
    mpp[0] = {1, 1};
    mpp[v[0]] = {1, 1};
    for (int i = 1; i < n; i++)
    {
        v[i] += v[i - 1];
        if (mpp.find(v[i]) != mpp.end())
        {
            ans += (mpp[v[i]].second * (n - i)) % mod;
            mpp[v[i]].first++;
            mpp[v[i]].second = i + 1;
        }
        else
        {
            mpp[v[i]] = {1, i + 1};
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