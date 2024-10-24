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
    vin(v, n);
    vector<int> b;
    int t = 0;
    for(int i =0;i<n-1;i++){
        b.pb(__gcd(v[i],v[i+1]));
        if(i==0)continue;
        if(b[i]<b[i-1]){
            if(t==0){

            if(i==n-2){
                YES
                return;
            }
            int t1= __gcd(v[i],v[i+2]);
            
            }
        }
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