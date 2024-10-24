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

int minSumWithConstraints(const vector<int> &arr, int d)
{
    int m = arr.size();
    vector<int> dp(m, INT_MAX); // DP array to store the minimum sums
    deque<int> dq;              // Monotonic deque to store indices

    dp[0] = arr[0];  // The first element is always selected
    dq.push_back(0); // Initialize the deque with the first index

    for (int i = 1; i < m; ++i)
    {
        // Remove elements from the deque that are out of the range [i - d, i - 1]
        while (!dq.empty() && dq.front() < i - d)
        {
            dq.pop_front();
        }

        // The front of the deque holds the index with the minimum dp value in range [i-d, i-1]
        dp[i] = dp[dq.front()] + arr[i];

        // Maintain the deque in increasing order of dp values
        while (!dq.empty() && dp[dq.back()] >= dp[i])
        {
            dq.pop_back();
        }

        // Add the current index to the deque
        dq.push_back(i);
    }

    return dp[m - 1]; // Return the minimum sum considering the last element
}

void solve()
{
    read(n);
    read(m);
    read(d);
    read(k);
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        vector<int> temp(m);
        for (int j = 0; j < m; j++)
        {
            cin >> temp[i];
        }

        v.pb(minSumWithConstraints(temp, d));
        cout << v[i] << tab;
    }
    cout << endl;
    int ans = 0;
    for (int i = 0; i < k; i++)
    {
        ans += v[i];
    }
    int temp = ans;
    for (int i = k; i < n; i++)
    {
        temp -= v[i - k];
        temp += v[i];
        ans = max(ans, temp);
    }
    cout << ans << endl;
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