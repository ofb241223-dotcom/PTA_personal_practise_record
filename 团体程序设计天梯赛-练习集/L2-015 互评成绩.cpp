/*
  @pintia psid=994805046380707840 pid=994805062432309248 compiler=GXX
  ProblemSet: 团体程序设计天梯赛-练习集
  Title: 互评成绩
  https://pintia.cn/problem-sets/994805046380707840/exam/problems/type/7?problemSetProblemId=994805062432309248
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
    int n, k, m;
    cin >> n >> k >> m;
    vector<double> ans;
    for (int i = 0; i < n; i++)
    {
        int mx = -1, mn = INT_MAX;
        double sum = 0;
        vector<int> v(k);
        for (auto &x : v)
        {
            cin >> x;
            sum += x;
            mx = max(mx, x);
            mn = min(mn, x);
        }
        sum -= (mx + mn);
        sum /= (k - 2);
        ans.push_back(sum);
    }
    sort(ans.begin(), ans.end(), greater<double>());
    for (int i = m - 1; i >= 0; i--)
    {
        if (i < m - 1)
        {
           printf(" ");
        }
        printf("%.3f", ans[i]);
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