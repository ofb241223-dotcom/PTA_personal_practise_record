/*
  @pintia psid=994805046380707840 pid=994805056195379200 compiler=GXX
  ProblemSet: 团体程序设计天梯赛-练习集
  Title: 分而治之
  https://pintia.cn/problem-sets/994805046380707840/exam/problems/type/7?problemSetProblemId=994805056195379200
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
    vector<int> g[n + 1];
    while (m--)
    {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    int k;
    cin >> k;
    while (k--)
    {
        int np;
        bool f = 0;
        cin >> np;
        vector<bool> vis(n + 1, 0);
        for (int i = 0; i < np; i++)
        {
            int x;
            cin >> x;
            vis[x] = 1;
        }
        for (int i = 1; i <= n; i++)
        {
            if (vis[i] == 0)
            {
                for (auto &x : g[i])
                {
                    if (vis[x] == 0)
                    {
                        f = 1;
                        break;
                    }
                }
            }
        }
        if (f == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
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