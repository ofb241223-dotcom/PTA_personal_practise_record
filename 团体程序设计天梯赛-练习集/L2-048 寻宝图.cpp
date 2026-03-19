/*
  @pintia psid=994805046380707840 pid=1649748772841508875 compiler=GXX
  ProblemSet: 团体程序设计天梯赛-练习集
  Title: 寻宝图
  https://pintia.cn/problem-sets/994805046380707840/exam/problems/type/7?problemSetProblemId=1649748772841508875
*/
// @pintia code=start
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int dxy[4][2] = { {0, 1}, {1, 0}, {0, -1}, {-1, 0} };
int n, m;
vector<string> v;
vector<vector<bool>> vis;
bool bfs(int sx, int sy)
{
    queue<pair<int, int>> q;
    q.push({sx, sy});
    bool flag = 0;
    while (!q.empty())
    {
        auto [x, y] = q.front();
        q.pop();
        if (vis[x][y] == 1)
        {
            continue;
        }
        vis[x][y] = 1;
        if (v[x][y] >= '2' && v[x][y] <= '9')
        {
            flag = 1;
        }
        for (int i = 0; i < 4; i++)
        {
            int nx = x + dxy[i][0];
            int ny = y + dxy[i][1];
            if (nx < 0 || nx >= n || ny < 0 || ny >= m)
            {
                continue;
            }
            if (vis[nx][ny] == 1 || v[nx][ny] == '0')
            {
                continue;
            }
            q.push({nx, ny});
        }
    }
    return flag;
}
void solve()
{
    int a = 0, b = 0;
    cin >> n >> m;
    v.resize(n);
    vis.assign(n, vector<bool>(m, 0));
    for (auto &x : v)
    {
        cin >> x;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (vis[i][j] == 0 && v[i][j] != '0')
            {
                //cout << i << " " << j << endl;
                a++;
                b += bfs(i, j);
            }
        }
    }
    cout << a << " " << b << endl;
}

int main()
{
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
// @pintia code=end