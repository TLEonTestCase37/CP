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
    vin(a, n);
    vector<int> b(n, 0);
    map<int, int> mpp;
    int mex = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        mpp[a[i]]++;
        while (mpp[mex])
            mex++;
        b[i] = mex;
    }
    vector<int> temp;
    mex = 0;
    mpp.clear();
    int mx = -1;
    for (int i = 0; i < n; i++)
    {
        mpp[a[i]]++;
        while (mpp[mex])
            mex++;
        mx = max(mx, b[i]);
        if (mex == mx)
        {
            mx = -1;
            temp.pb(mex);
            mex = 0;
            mpp.clear();
        }
    }
    // for (int i : b)
    //     cout << i << tab;
    // cout << endl;
    cout << temp.size() << endl;
    for (int i : temp)
        cout << i << tab;
    cout << endl;
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