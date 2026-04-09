/*
  @pintia psid=994805046380707840 pid=1781658570803388427 compiler=GXX
  ProblemSet: 团体程序设计天梯赛-练习集
  Title: 吉利矩阵
  https://pintia.cn/problem-sets/994805046380707840/exam/problems/type/7?problemSetProblemId=1781658570803388427
*/
// @pintia code=start
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long ll;
vector<vector<int>> a(10, vector<int>(10, 0));
int l, n, ans = 0, cnt = 0;
void dfs(int r, int c)
{
    if (r == n)
    {
        bool f = 0;
        for (int i = 0; i < n; i++)
        {
            int sum = 0;
            for (int j = 0; j < n; j++)
            {
                sum += a[i][j];
            }
            if (sum != l)
            {
                f = 1;
                break;
            }
        }
        for (int i = 0; i < n; i++)
        {
            int sum = 0;
            for (int j = 0; j < n; j++)
            {
                sum += a[j][i];
            }
            if (sum != l)
            {
                f = 1;
                break;
            }
        }
        if (f == 0)
        {
            ans++;
        }
        return;
    }
    int nr = r, nc = c + 1;
    if (nc == n)
    {
        nr++, nc = 0;
    }
    for (int i = 0; i <= l; i++)
    {
        int cur_r = 0, cur_c = 0;
        for (int j = 0; j < c; j++)
        {
            cur_r += a[r][j];
        }
        for (int j = 0; j < r; j++)
        {
            cur_c += a[j][c];
        }
        if (cur_c + i > l || cur_r + i > l)
        {
            break;
        }
        if ((r == n - 1 && cur_c + i != l) || (c == n - 1 && cur_r + i != l))
        {
            continue;
        }
        a[r][c] = i;
        dfs(nr, nc);
    }
}
void solve()
{
    cin >> l >> n;
    dfs(0, 0);
    cout << ans << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}

// @pintia code=end