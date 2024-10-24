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
    int a = 0;
    int n = s.length();
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'A')
            a++;
    }
    if (a == 0 || a == n)
    {
        cout << 0 << endl;
        return;
    }
    if (s[0] == 'B' || s[n - 1] == 'B')
    {
        cout << a << endl;
        return;
    }
    for (int i = 1; i < n; i++)
    {
        if (s[i] == s[i - 1] && s[i] == 'B')
        {
            cout << a << endl;
            return;
        }
    }
    int mn = INT_MAX;
    int t = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'A')
            t++;
        if (s[i] == 'B')
        {
            mn = min(mn, t);
            t = 0;
        }
    }
    mn = min(mn, t);
    cout << a - mn << endl;
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