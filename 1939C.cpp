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
    sort(all(v));
    int start = v[n - 1];
    int end = v[n - 1] + k - 1;
    for (int i = n - 2; i >= 0; i--)
    {
        int t = (start - v[i]) / (2 * k);
        int s = v[i] + t * (2 * k);
        int e = s + k - 1;
        if (e < start || s > end)
        {
            s += 2 * k;
            e += 2 * k;
            if (e < start || s > end)
            {
                cout << -1 << endl;
                return;
            }
        }
        if (e < end)
            end = e;
        if (start < s)
            start = s;
    }
    cout << start << endl;
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