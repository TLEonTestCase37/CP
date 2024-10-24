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

bool valid(int x, int y, int n, int m)
{
    return (x >= 0 && x < n && y >= 0 && y < m);
}
void solve()
{
    read(n);
    read(m);
    vector<pii> mon;
    int sx, sy;
    char grid[n + 1][m + 1];
    char dir[n + 1][m + 1];
    int dis[n + 1][m + 1];
    int dis2[n + 1][m + 1];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            dir[i][j] = 'x';
            cin >> grid[i][j];
            if (grid[i][j] == 'A')
            {
                sx = i;
                sy = j;
            }
            else if (grid[i][j] == 'M')
            {
                mon.pb({i, j});
            }
        }
    }
    vector<pair<pii, int>> end;
    queue<pii> q;
    dis[sx][sy] = 0;
    q.push({sx, sy});
    int dx[4] = {-1, 1, 0, 0};
    int dy[4] = {0, 0, -1, 1};
    while (!q.empty())
    {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if (valid(nx, ny, n, m))
            {
                if (dir[nx][ny] == 'x' && grid[nx][ny] == '.')
                {
                    char d = 'U';
                    if (ny - y == -1)
                        d = 'D';
                    else if (nx - x == 1)
                        d = 'R';
                    else if (nx - x == -1)
                        d = 'L';
                    dir[nx][ny] = d;
                    dis[nx][ny] = dis[x][y] + 1;
                    if (nx == n - 1 || nx == 0 || ny == 0 || ny == m - 1)
                        end.pb({{nx, ny}, dis[nx][ny]});
                    else
                        q.push({nx, ny});
                }
            }
        }
    }
}

int32_t main()
{
    tezi_se_karo
    solve();

    return 0;
}