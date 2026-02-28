/*
  @pintia psid=994805046380707840 pid=994805066135879680 compiler=GXX
  ProblemSet: 团体程序设计天梯赛-练习集
  Title: 排座位
  https://pintia.cn/problem-sets/994805046380707840/exam/problems/type/7?problemSetProblemId=994805066135879680
*/
// @pintia code=start
#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
const int M = 200005;
typedef long long ll;
typedef unsigned long long ull;
const ll mod = 1000000007;
int fa[105];
int enemy[105][105];
int find(int x)
{
    return fa[x] == x ? x : fa[x] = find(fa[x]);
}
void solve()
{
    int n, m, k;
    cin >> n >> m >> k;

    for (int i = 1; i <= n; i++)
    {
        fa[i] = i;
    }
    for (int i = 0; i < m; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        if (w == 1)
        {
            int fu = find(u);
            int fv = find(v);
            if (fu != fv)
            {
                fa[fu] = fv;
            }
        }
        else
        {
            enemy[u][v] = 1;
            enemy[v][u] = 1;
        }
    }
    while (k--)
    {
        int u, v;
        cin >> u >> v;

        bool is_friend = (find(u) == find(v));
        bool is_enemy = (enemy[u][v] == 1);
        if (is_friend && !is_enemy)
        {
            cout << "No problem" << endl;
        }
        else if (!is_friend && !is_enemy)
        {
            cout << "OK" << endl;
        }
        else if (is_friend && is_enemy)
        {
            cout << "OK but..." << endl;
        }
        else if (!is_friend && is_enemy)
        {
            cout << "No way" << endl;
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