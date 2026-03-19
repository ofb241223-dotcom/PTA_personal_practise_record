/*
  @pintia psid=994805046380707840 pid=994805055176163328 compiler=GXX
  ProblemSet: 团体程序设计天梯赛-练习集
  Title: 名人堂与代金券
  https://pintia.cn/problem-sets/994805046380707840/exam/problems/type/7?problemSetProblemId=994805055176163328
*/
// @pintia code=start
#include <bits/stdc++.h>
using namespace std;
#define endl "\n";
bool cmp(const pair<string, int>& a, const pair<string, int>& b)
{
    if (a.second != b.second)
    {
        return a.second > b.second;
    }
    return a < b;
}
void solve()
{
    int n, g, k;
    cin >> n >> g >> k;
    int sum = 0;
    vector<pair<string, int>> v(n), vv;
    for (auto& [x, y] : v)
    {
        cin >> x >> y;
        if (y >= g)
        {
            sum += 50;
        }
        else if(y >= 60 && y < g)
        {
            sum += 20;
        }
    }
    cout << sum << endl;
    sort(v.begin(), v.end(), cmp);
    int rank = 1, cnt = 1;
    if (n > 0)
    {
        cout << rank << " " << v[0].first << " " << v[0].second << endl;
        int i = 1;
        while (rank <= k && i < n)
        {
            if (v[i].second != v[i - 1].second)
            {
                rank += cnt;
                cnt = 1;
            }
            else
            {
                cnt++;
            }
            if (rank > k)
            {
                break;
            }
            cout << rank << " " << v[i].first << " " << v[i].second << endl;
            i++;
        }
    }
}

int main()
{
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
// @pintia code=end