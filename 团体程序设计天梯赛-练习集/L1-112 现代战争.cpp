/*
  @pintia psid=994805046380707840 pid=1913922872972247047 compiler=GXX
  ProblemSet: 团体程序设计天梯赛-练习集
  Title: 现代战争
  https://pintia.cn/problem-sets/994805046380707840/exam/problems/type/7?problemSetProblemId=1913922872972247047
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
    int n, m, k;
    cin >> n >> m >> k;
    vector<vector<int>> v(n, vector<int>(m));
    vector<vector<bool>> vis(n, vector<bool>(m, 0));
    vector<pair<int, pair<int, int>>> num;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> v[i][j];
            num.push_back({v[i][j], {i, j}});
        }
    }
    sort(num.begin(), num.end());
    int idx = num.size() - 1;
    while (k--)
    {
        while (vis[num[idx].second.first][num[idx].second.second] == 1)
        {
            idx--;
        }
        vis[num[idx].second.first][num[idx].second.second] = 1;
        for (int i = 0; i < m; i++)
        {
            vis[num[idx].second.first][i] = 1;
        }
        for (int i = 0; i < n; i++)
        {
            vis[i][num[idx].second.second] = 1;
        }
        idx--;
    }
    for (int i = 0; i < n; i++)
    {
        bool f = 0;
        for (int j = 0; j < m; j++)
        {
            if (vis[i][j] == 0)
            {
                if (f == 1)
                {
                    cout << " ";
                }
                cout << v[i][j];
                f = 1;
            }
        }
        if (f == 1)
        {
            cout << endl;
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