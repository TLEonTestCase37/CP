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
    string s1, s2;
    cin >> s1 >> s2;
    int ans = 0;
    vector<bool> used1(n, false);
    vector<bool> used2(n, false);
    for (int i = 0; i < n; i++)
    {
        if (i > 1)
        {
            if (s1[i - 2] == s1[i] && s1[i] == 'A' && !used1[i] && !used1[i - 2])
            {
                used1[i] = used1[i - 2] = true;
                ans++;
            }
            if (s2[i] == s2[i - 2] && s2[i] == 'A' && !used2[i] && !used2[i - 2])
            {
                used2[i] = used2[i - 2] = true;
                ans++;
            }
        }
        if (i > 0)
        {
            if (s1[i] == 'A' && s1[i - 1] == 'A' && !used1[i] && !used1[i - 1])
            {
                used1[i] = used1[i - 1] = true;
                ans++;
            }
            if (s2[i] == 'A' && s2[i - 1] == 'A' && !used2[i] && !used2[i - 1])
            {
                used2[i] = used2[i - 1] = true;
                ans++;
            }
            if (s1[i] == 'A' && s2[i - 1] == 'A' && !used1[i] && !used2[i - 1])
            {
                used1[i] = used2[i - 1] = true;
                ans++;
            }
            if (s2[i] == 'A' && s1[i - 1] == 'A' && !used2[i] && !used1[i - 1])
            {
                used2[i] = used1[i - 1] = true;
                ans++;
            }
        }
        if (s1[i] == s2[i] && s1[i] == 'A' && !used1[i] && !used2[i])
        {
            used1[i] = used2[i] = true;
            ans++;
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