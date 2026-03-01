/*
  @pintia psid=994805046380707840 pid=1336215880692482059 compiler=GXX
  ProblemSet: 团体程序设计天梯赛-练习集
  Title: 网红点打卡攻略
  https://pintia.cn/problem-sets/994805046380707840/exam/problems/type/7?problemSetProblemId=1336215880692482059
*/
// @pintia code=start
#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
const int M = 200005;
typedef long long ll;
typedef unsigned long long ull;
const ll mod = 1000000007;
int dist[205][205];
bool cmp(const pair<int, int>& a, const pair<int, int>& b)
{
    if (a.first != b.first)
    {
        return a.first < b.first;
    }
    return  a.second < b.second;
}
void solve()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        dist[u][v] = w;
        dist[v][u] = w;
    }
    int k;
    cin >> k;
    vector<pair<vector<int>, int>> v;
    for(int j = 1; j <= k; j++)
    {
        int p;
        cin >> p;
        vector<int> path;
        set<int> st;
        path.push_back(0);
        for (int i = 0; i < p; i++)
        {
            int x;
            cin >> x;
            path.push_back(x);
            st.insert(x);
        }
        if (st.size() != n)
        {
            continue;
        }
        if (path.size() != n + 1)
        {
            continue;
        }
        path.push_back(0);
        bool f = 0;
        for (int i = 0; i < path.size() - 1; i++)
        {
            if (dist[path[i]][path[i + 1]] == 0)
            {
                f = 1;
                break;
            }
        }
        if (f == 0)
        {
            v.push_back({path, j});
        }
    }
    cout << v.size() << endl;
    vector<pair<int, int>> ans;
    for (auto &[path, id] : v)
    {
        int sum = 0;
        for (int i = 0; i < path.size() - 1; i++)
        {
            sum += dist[path[i]][path[i + 1]];
        }
        ans.push_back({sum, id});
    }
    sort(ans.begin(), ans.end(), cmp);
    cout << ans.front().second << " " << ans.front().first;
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