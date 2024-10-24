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
    vector<pii> v;
    for (int i = 0; i < n; i++)
    {
        read(a);
        v.pb({a, 1});
    }
    for (int i = 0; i < n; i++)
    {
        read(a);
        v.pb({a, -1});
    }
    sort(all(v));
    vin(c, n);
    sort(all(c));
    reverse(all(c));
    stack<int> st;
    ll ans = 0;
    vector<ll> v1;
    // int index = 0;
    for (int i = 0; i < 2 * n; i++)
    {
        if (v[i].second == 1)
        {
            st.push(v[i].first);
        }
        else
        {
            v1.pb(v[i].first - st.top());
            st.pop();
        }
    }
    sort(all(v1));
    for (int i = 0; i < n; i++)
        ans += v1[i] * c[i];
    cout << ans << endl;
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