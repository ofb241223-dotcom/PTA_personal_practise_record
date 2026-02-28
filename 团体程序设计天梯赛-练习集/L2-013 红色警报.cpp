/*
  @pintia psid=994805046380707840 pid=994805063963230208 compiler=GXX
  ProblemSet: 团体程序设计天梯赛-练习集
  Title: 红色警报
  https://pintia.cn/problem-sets/994805046380707840/exam/problems/type/7?problemSetProblemId=994805063963230208
*/
// @pintia code=start
#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
const int M = 200005;
typedef long long ll;
typedef unsigned long long ull;
const ll mod = 1000000007;
vector<bool> dead(505, 0);
vector<vector<int>> g(505);
int n, m;
vector<bool> vis(505, 0);
int cnt()
{
    int res = 0;
    vector<bool> vis(505, 0);
    for (int i = 0; i < n; i++)
    {
        if (vis[i] == 1 || dead[i] == 1)
        {
            continue;
        }
        res++;
        queue<int> q;
        q.push(i);
        vis[i] = 1;
        while (!q.empty())
        {
            auto it = q.front();
            q.pop();
            for (auto& x : g[it])
            {
                if (dead[x] == 0 && vis[x] == 0)
                {
                    vis[x] = 1;
                    q.push(x);
                }
            }
        }
    }
    return res;
}
void dfs(int u)
{
    for (auto& x : g[u])
    {
        if (vis[x] == 0 && dead[x] == 0)
        {
            vis[x] = 1;
            dfs(x);
        }
    }
}
void solve()
{
    cin >> n >> m;
    while (m--)
    {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    int k, alive = n;
    cin >> k;
    while (k--)
    {
        int x;
        cin >> x;
        alive--;
        vis.assign(505, 0);
        int cnt1 = 0;
        for (int i = 0; i < n; i++)
        {
            if (vis[i] == 0 && dead[i] == 0)
            {
                cnt1++;
                dfs(i);
            }
        }
        dead[x] = 1;
        vis.assign(505, 0);
        int cnt2 = 0;
        for (int i = 0; i < n; i++)
        {
            if (vis[i] == 0 && dead[i] == 0)
            {
                cnt2++;
                dfs(i);
            }
        }
        if (cnt1 < cnt2)
        {
            cout << "Red Alert: City " << x << " is lost!" << endl;
        }
        else
        {
            cout << "City " << x << " is lost." << endl;
        }
        if (alive == 0)
        {
            cout << "Game Over." << endl;
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    // cin >> t;
    while (t--)
        solve();
    return 0;
}
// @pintia code=end