/*
  @pintia psid=994805046380707840 pid=1111914599412858888 compiler=GXX
  ProblemSet: 团体程序设计天梯赛-练习集
  Title: 深入虎穴
  https://pintia.cn/problem-sets/994805046380707840/exam/problems/type/7?problemSetProblemId=1111914599412858888
*/
// @pintia code=start
#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
const int M = 200005;
typedef long long ll;
typedef unsigned long long ull;
const ll mod = 1000000007;
int n;
vector<int> dp(100005, -1);
vector<int> g[100005];
int root;
vector<int> in(100005, 0);
vector<int> dep(100005, 0);
pair<int, int> ans = {-1, 0};
void dfs(int u, int step)
{
    dep[u] = step;
    if (dep[u] > ans.first)
    {
        ans.first = dep[u];
        ans.second = u;
    }
    for (auto &v : g[u])
    {
        dfs(v, step + 1);
    }
}
void solve()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int k;
        cin >> k;
        while (k--)
        {
            int x;
            cin >> x;
            in[x]++;
            g[i].push_back(x);
        }
    }
    for (int i = 1; i <= n; i++)
    {
        if (in[i] == 0)
        {
            root = i;
            break;
        }
    }
    dfs(root, 0);
    cout << ans.second;
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