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
    string s;
    cin >> s;
    vector<int> v(n);
    int X1 = 0, X2 = 0;
    for (int i = 0; i < n; i++)
    {
        v[i] = s[i] - '0';
        if (v[i])
            X1 ^= a[i];
        else
            X2 ^= a[i];
    }
    vector<int> prefix(n);
    prefix[0] = a[0];
    for (int i = 1; i < n; i++)
        prefix[i] = prefix[i - 1] ^ a[i];
    read(q);
    while (q--)
    {
        read(tp);
        if (tp == 1)
        {
            read(l);
            read(r);
            l--;
            r--;
            if (l >= 1)
            {
                X1 ^= prefix[l - 1];
                X2 ^= prefix[l - 1];
            }
            X1 ^= prefix[r];
            X2 ^= prefix[r];
        }
        else
        {
            read(g);
            if (g == 1)
                cout << X1 << tab;
            else
                cout << X2 << tab;
        }
    }
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