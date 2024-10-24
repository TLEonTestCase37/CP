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
    read(q);
    map<int, int> mpp;
    vin(v, n);
    vector<int> b;
    while (m--)
    {
        read(a);
        if (mpp.find(a) == mpp.end())
        {
            mpp[a] = 1;
            b.pb(a);
        }
    }
    int t1 = 0, t2 = 0;
    while (t1 < n && t2 < b.size())
    {
        if (v[t1] != b[t2])
        {
            cout << "TIDAK" << endl;
            return;
        }
        else
        {
            t1++;
            t2++;
        }
    }

    cout << "YA" << endl;
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