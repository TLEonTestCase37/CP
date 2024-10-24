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
    string s;
    cin >> s;
    int t = 0;
    for (char c : s)
    {
        if (c == '1')
            t++;
    }
    if (t == 0)
    {
        NO return;
    }
    for(int i =0;i<n;i++){
        if(s[i]=='1'){
            if(i==0 || i==n-1){
                YES
                return;
            }
            if(s[i-1]=='1' || s[i+1]=='1'){
                YES
                return;
            }
        }
    }
    NO
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