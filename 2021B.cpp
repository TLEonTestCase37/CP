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
    map<int, int> mpp;
    map<int, int> MEX;
    for (int i = 0; i < n; i++)
    {
        read(a);
        MEX[a]++;
    }
    int mex = 0;
    for (int i = 0; i <= n + 1; i++)
    {
        if (MEX.find(i) != MEX.end())
        {
            mpp[i % x] += MEX[i] - 1;
        }
        else
        {
            if (mpp.find(i % x) == mpp.end() || mpp[i % x] == 0)
            {
                break;
            }
            else
            {
                mpp[i % x]--;
            }
        }
        mex++;
    }
    cout << mex << endl;
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