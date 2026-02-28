/*
  @pintia psid=994805046380707840 pid=1518582482059845632 compiler=GXX
  ProblemSet: 团体程序设计天梯赛-练习集
  Title: 龙龙送外卖
  https://pintia.cn/problem-sets/994805046380707840/exam/problems/type/7?problemSetProblemId=1518582482059845632
*/
// @pintia code=start
#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
const int M = 200005;
typedef long long ll;
typedef unsigned long long ull;
const ll mod = 1000000007;

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> pre(n + 1);
    int root;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        pre[i] = x;
        if (pre[i] == -1)
        {
            root = i;
        }
    }
    vector<vector<int>> g(n + 1);
    for (int i = 1; i <= n; i++)
    {
        if (pre[i] != -1)
        {
            g[pre[i]].push_back(i);
        }
    }
    queue<int> q;
    vector<int> dep(n + 1, 0);
    q.push(root);
    while (!q.empty())
    {
        auto it = q.front();
        q.pop();
        for (auto& x : g[it])
        {
            dep[x] = dep[it] + 1;
            q.push(x);
        }
    }
    vector<bool> vis(n + 1, 0);
    vis[root] = 1;
    int total = 0, mx = -1;
    while (m--)
    {
        int k;
        cin >> k;
        mx = max(mx, dep[k]);
        while (vis[k] == 0)
        {
            vis[k] = 1;
            total += 2;
            k = pre[k];
        }
        cout << total - mx << endl;
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