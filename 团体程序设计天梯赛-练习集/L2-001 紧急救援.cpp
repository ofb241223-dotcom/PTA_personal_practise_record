/*
  @pintia psid=994805046380707840 pid=994805073643683840 compiler=GXX
  ProblemSet: 团体程序设计天梯赛-练习集
  Title: 紧急救援
  https://pintia.cn/problem-sets/994805046380707840/exam/problems/type/7?problemSetProblemId=994805073643683840
*/
// @pintia code=start
#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
const int M = 200005;
typedef long long ll;
typedef unsigned long long ull;
const ll mod = 1000000007;
struct edge
{
    int to, w;
};
void solve()
{
    int n, m, s, d;
    cin >> n >> m >> s >> d;
    vector<int> v(n);
    vector<edge> adj[n];
    for (auto& x : v)
    {
        cin >> x;
    }
    for (int i = 0; i < m; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].push_back({v, w});
        adj[v].push_back({u, w});
    }
    vector<int> dist(n, 1e9);
    vector<int> cnt(n, 0);
    vector<int> pre(n, -1);
    vector<int> path(n, 0);
    vector<bool> vis(n, 0);
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> q;
    q.push({0, s});
    dist[s] = 0;
    cnt[s] = v[s];
    path[s] = 1;
    while (!q.empty())
    {
        auto [d, it] = q.top();
        q.pop();
        if (vis[it] == 1)
        {
            continue;
        }
        vis[it] = 1;
        for (auto& [to, w] : adj[it])
        {
            if (dist[it] + w < dist[to])
            {
                dist[to] = dist[it] + w;
                pre[to] = it;
                path[to] = path[it];
                cnt[to] = cnt[it] + v[to];
                q.push({dist[to], to});
            }
            else if (dist[it] + w == dist[to])
            {
                path[to] += path[it];
                if (cnt[it] + v[to] > cnt[to])
                {
                    cnt[to] = cnt[it] + v[to];
                    pre[to] = it;
                    q.push({dist[to], to});
                }
            }
        }
    }
    cout << path[d] << " " << cnt[d] << endl;
    int st = d;
    vector<int> ans;
    while (pre[st] != -1)
    {
        ans.push_back(st);
        st = pre[st];
    }
    ans.push_back(s);
    reverse(ans.begin(), ans.end());
    for (int i = 0; i < ans.size(); i++)
    {
        if (i > 0)
        {
            cout << " ";
        }
        cout << ans[i];
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