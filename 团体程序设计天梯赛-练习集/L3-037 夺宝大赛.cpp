/*
  @pintia psid=994805046380707840 pid=1781658570803388428 compiler=GXX
  ProblemSet: 团体程序设计天梯赛-练习集
  Title: 夺宝大赛
  https://pintia.cn/problem-sets/994805046380707840/exam/problems/type/7?problemSetProblemId=1781658570803388428
*/
// @pintia code=start
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long ll;
int dxy[4][2] = {{0,1}, {1, 0}, {-1, 0}, {0, -1}};
void solve()
{
    int m, n;
    cin >> m >> n;
    vector<vector<int>> v(m + 1, vector<int>(n + 1, 0));
    int sx, sy;
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> v[i][j];
            if(v[i][j] == 2)
            {
                sx = i, sy = j;
            }
        }
    }
    vector<vector<bool>> vis(m + 1, vector<bool>(n + 1, 0));
    vector<vector<int>> dist(m + 1, vector<int>(n + 1, 1e9));
    dist[sx][sy] = 0;
    queue<tuple<int, int, int>> q;
    q.push({sx, sy, 0});
    while (!q.empty())
    {
        auto [x, y, t] = q.front();
        q.pop();
        if (vis[x][y] == 1)
        {
            continue;
        }
        vis[x][y] = 1;
        for (int i = 0; i < 4; i++)
        {
            int nx = x + dxy[i][0];
            int ny = y + dxy[i][1];
            if (nx >= 1 && nx <= m && ny >= 1 && ny <= n && vis[nx][ny] == 0 && v[nx][ny] != 0)
            {
                dist[nx][ny] = dist[x][y] + 1;
                q.push({nx, ny, dist[nx][ny]});
            }
        }
    }
    int k;
    cin >> k;
    map<int, vector<int>> time;
    pair<int, int> ans = {-1, 1e9};
    for (int i = 1; i <= k; i++)
    {
        int x, y;
        cin >> x >> y;
        if(x >= 1 && x <= n && y >= 1 && y <= m)
        {
            int d = dist[y][x];
            if (d < 1e9)
            {
                time[d].push_back(i);
            }
        }
    }
    for (auto [t, vec] : time)
    {
        if (vec.size() == 1)
        {
            ans.first = vec.front();
            ans.second = t;
            break;
        }
    }
    if(ans.first != -1)
    {
        cout << ans.first << " " << ans.second << endl;
    }
    else
    {
        cout << "No winner." << endl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
// @pintia code=end