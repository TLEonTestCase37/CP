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
    vector<bool> res(1e6 + 10, true);
    res[1] = false;
    for (int i = 2; i < sqrt(1e6 + 11); i++)
    {
        for (int j = 2 * i; j < 1e6 + 11; j += i)
        {
            res[j] = false;
        }
    }
    while (n--)
    {
        read(a);
        ll t = sqrt(a);
        if (t * t == a && res[t])
        {
            YES
        }
        else
        {
            NO
        }
    }
}

int32_t main()
{
    tezi_se_karo
    solve();

    return 0;
}