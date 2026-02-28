/*
  @pintia psid=994805046380707840 pid=994805081289900032 compiler=GXX
  ProblemSet: 团体程序设计天梯赛-练习集
  Title: 天梯赛座位分配
  https://pintia.cn/problem-sets/994805046380707840/exam/problems/type/7?problemSetProblemId=994805081289900032
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
    int n;
    cin >> n;
    vector<int> m(n), sum(n);
    for (int i = 0; i < n; i++)
    {
        cin >> m[i];
        sum[i] = m[i] * 10;
    }
    vector<vector<int>> seat(n);
    vector<int> assigned(n, 0);
    int cur = 1;
    while (true)
    {
        vector<int> active;
        for (int i = 0; i < n; i++)
        {
            if (assigned[i] < sum[i])
            {
                active.push_back(i);
            }
        }
        if (active.empty())
            break;
        if (active.size() == 1)
        {
            int s = active.back();
            int l = seat[s].empty() ? -1 : seat[s].back();
            int st = (l < 0) ? cur : max(cur, l + 2);
            for (int j = 0; j < sum[s] - assigned[s]; j++)
            {
                seat[s].push_back(st + 2 * j);
            }
            break;
        }
        for (int x : active)
        {
            seat[x].push_back(cur++);
            assigned[x]++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("#%d\n", i + 1);
        for (int j = 0; j < (int)seat[i].size(); j++)
        {
            if (j > 0 && j % 10 == 0)
                printf("\n");
            if (j % 10 > 0)
                printf(" ");
            printf("%d", seat[i][j]);
        }
        printf("\n");
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