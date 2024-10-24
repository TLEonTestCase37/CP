#include <bits/stdc++.h>

using namespace std;

#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

int ask(int a, int b)
{
    cout << "? " << a << " " << b << endl;
    int x;
    cin >> x;
    cout.flush();
    return x;
}
void solve()
{
    int n;
    cin >> n;
    cout.flush();
    int t = -1;
    int ans = -1;
    for (int i = 1; i <= n; i += 2)
    {
        if (i == n)
        {
            ans = n;
            break;
        }
        if (i == n - 1)
        {
            t = n - 1;
            break;
        }
        else
        {
            int a = ask(i, i + 1);
            int b = ask(i + 1, i);
            if (a != b)
            {
                t = i;
                break;
            }
        }
    }
    if (ans == -1)
    {

        if (t == 1)
        {
            int a = ask(1, 3);
            int b = ask(3, 1);
            if (a != b)
                ans = 1;
            else
                ans = 2;
        }
        else
        {
            int a = ask(t, t - 1);
            int b = ask(t - 1, t);
            if (a != b)
                ans = t;
            else
                ans = t + 1;
        }
    }
    cout << "! " << ans << endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    cout.flush();
    while (t--)
    {
        solve();
    }
    return 0;
}