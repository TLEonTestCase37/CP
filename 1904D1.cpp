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
    vin(b, n);
    vector<pii> temp;
    for (int i = 0; i < n; i++)
    {
        if (b[i] < a[i])
        {
            NO return;
        }
        else if (b[i] > a[i])
        {
            temp.pb({b[i], i});
        }
    }
    sort(all(temp));
    for (int i = 0; i < temp.size(); i++)
    {
        if (a[temp[i].second] == temp[i].first)
            continue;
        int right = temp[i].second, left = temp[i].second;
        int mx1 = a[right];
        int mx2 = a[left];
        while (right < n && a[right] != b[temp[i].first])
        {
            right++;
            mx1 = max(mx1, (int)a[right]);
        }
        while (left >= 0 && a[left] != b[temp[i].second])
        {
            left--;
            mx2 = max(mx2, (int)a[left]);
        }
        if ((right > n - 1 && left < 0) || (mx1 != temp[i].first && mx2 != temp[i].first))
        {
            NO return;
        }
        if (left < 0)
        {
            for (int j = temp[i].second; j <= right; j++)
                a[j] = temp[i].first;
        }
        else if(right>n-1)
        {
            for (int j = temp[i].second; j >= left; j--)
                a[j] = temp[i].first;
        }else{
            
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] != b[i])
        {
            NO return;
        }
    }
    YES
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