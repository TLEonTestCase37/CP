#include <bits/stdc++.h>
using namespace std;

#define int long long 

void solve(){
    int n;cin>>n;
    int ans=0;
    for(int x=0;x<=n;x++){
        int y=n;
        while(x*x + y*y >= (n+1)*(n+1)){
            y--;
        }
        while(x*x + y*y >= n*n && y>0){
            y--;ans++;
        }
    }
    ans*=4;
    cout<<ans<<endl;
}

int32_t main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;  
    t=1;
    cin >> t;
    while(t--) { 
        solve();
    }
    return 0;
}