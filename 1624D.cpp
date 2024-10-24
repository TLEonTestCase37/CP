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
    int n, k;
    string s;
    cin >> n >> k >> s;
    vector<int> cnt(26);
    for (char c : s)
    {
        cnt[c - 'a']++;
    }
    int cntPairs = 0, cntOdd = 0;
    for (int c : cnt)
    {
        cntPairs += c / 2;
        cntOdd += c % 2;
    }
    int ans = 2 * (cntPairs / k);
    cntOdd += 2 * (cntPairs % k);
    if (cntOdd >= k)
    {
        ans++;
    }
    cout << ans << '\n';
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