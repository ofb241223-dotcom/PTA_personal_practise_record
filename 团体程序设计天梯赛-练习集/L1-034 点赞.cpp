/*
  @pintia psid=994805046380707840 pid=994805098188750848 compiler=GXX
  ProblemSet: 团体程序设计天梯赛-练习集
  Title: 点赞
  https://pintia.cn/problem-sets/994805046380707840/exam/problems/type/7?problemSetProblemId=994805098188750848
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
    vector<int> a(1005, 0);
    int n;
    cin >> n;
    map<int, int> mp;
    pair<int, int> ans = {0, 0};
    for (int i = 0; i < n; i++)
    {
        int m;
        cin >> m;
        for (int j = 0; j < m; j++)
        {
            int x;
            cin >> x;
            mp[x]++;
            ans.second = max(ans.second, mp[x]);
        }
    }
    for (auto it : mp)
    {
        if (it.second == ans.second && it.first >= ans.first)
        {
            ans.first = it.first;
        }
    }
    cout << ans.first << " " << ans.second;
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