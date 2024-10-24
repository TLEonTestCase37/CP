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

vector<bool> prime(1e6 + 1, true);
void precalc()
{
    int n = 1e6 + 1;
    prime[1] = false;
    for (int p = 2; p * p <= n; p++)
    {
        if (prime[p] == true)
        {
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
}

void solve()
{
    read(n);
    read(e);
    vin(v, n);
    vector<bool> used(n, false);
    vector<int> d(n, -1);
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (!used[i] && (v[i] == 1 || prime[v[i]]))
        {
            used[i] = true;
            ll t2 = 0;
            ll t1 = 0;
            int j = i;
            if (d[i] == -1)
            {
                for (; j < n; j += e)
                {
                    used[j] = true;
                    if (v[j] != 1)
                        break;
                    t1++;
                }
            }
            else
                t1 = d[i];
            if (j >= n || !prime[v[j]])
                continue;
            used[j] = true;
            j += e;
            for (; j < n; j += e)
            {
                used[j] = true;
                if (v[j] != 1)
                    break;
                t2++;
            }
            if (j < n && prime[v[j]])
            {
                used[j] = false;
                d[j] = t2;
            }
            if (t1 == 0 && t2 == 0)
                continue;
            else if (t1 == 0)
                ans += t2;
            else if (t2 == 0)
                ans += t1;
            else
                ans += (t1 * t2) + t2 + t1;
            // cout << i << tab << t1 << tab << t2 << endl;
        }
    }
    cout << ans << endl;
    // for (int i : v)
    //     cout << (prime[i] ? 1 : 0) << tab;
}

int32_t main()
{
    precalc();
    tezi_se_karo int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}