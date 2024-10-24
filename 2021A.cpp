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

void solve(){
    read(n);
    vin(v,n);
    sort(all(v));
    int t = v[0]+v[1];
    t/=2;
    for(int i=2;i<n;i++){
        t += v[i];
        t/=2;
    }
    cout<<t<<endl;
}


int32_t main()
{
    tezi_se_karo 
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}