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
vector<int> g[100005];
vector<int> dp(100005, -1);
int dfs(int u)
{
    if (g[u].empty())
    {
        return dp[u] = 0;
    }
    if (dp[u] != -1)
    {
        return dp[u];
    }
    dp[u] = dfs(g[u][0]) + 1;
    return dp[u];
}
void solve()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int k;
        cin >> k;
        for (int j = 0; j < k; j++)
        {
            int x;
            cin >> x;
            g[x].push_back(i);
        }
    }
    int ans = -1, id;
    for (int i = 1; i <= n; i++)
    {
        if (dfs(i) > ans)
        {
            ans = dp[i];
            id = i;
        }
    }
    cout << id;
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