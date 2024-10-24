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
    read(q);
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        v[i]--;
    }
    string s;
    cin >> s;
    map<int, int> mpp;
    vector<int> mn(n), mx(n);
    mx[0] = v[0];
    for (int i = 1; i < n; i++)
        mx[i] = max(mx[i - 1], v[i]);
    mn[n - 1] = v[n - 1];
    for (int i = n - 2; i >= 0; i--)
        mn[i] = min(v[i], mn[i + 1]);
    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] == 'L' && s[i + 1] == 'R' && mx[i] > mn[i + 1])
            mpp[i] = 1;
    }
    while (q--)
    {
        read(a);
        a--;

        if (s[a] == 'L' && s[a + 1] == 'R' && mx[a] > mn[a + 1])
            mpp.erase(a);
        if (s[a - 1] == 'L' && s[a] == 'R' && mx[a - 1] > mn[a])
            mpp.erase(a - 1);

        s[a] = s[a] == 'L' ? 'R' : 'L';

        if (s[a] == 'L' && s[a + 1] == 'R' && mx[a] > mn[a + 1])
            mpp[a] = 1;
        if (s[a - 1] == 'L' && s[a] == 'R' && mx[a - 1] > mn[a])
            mpp[a - 1] = 1;

        if(mpp.empty())YES
        else NO
    }
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