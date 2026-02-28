/*
  @pintia psid=994805046380707840 pid=1518582589840875520 compiler=GXX
  ProblemSet: 团体程序设计天梯赛-练习集
  Title: 大众情人
  https://pintia.cn/problem-sets/994805046380707840/exam/problems/type/7?problemSetProblemId=1518582589840875520
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
    vector<vector<int>> dist(n + 1, vector<int>(n + 1, 1e9));
    vector<int> f, m;
    for (int i = 1; i <= n; i++)
    {
        dist[i][i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        char ch;
        int k;
        cin >> ch >> k;
        if (ch == 'F')
        {
            f.push_back(i + 1);
        }
        else
        {
            m.push_back(i + 1);
        }
        while (k--)
        {
            int id, d;
            char ch;
            cin >> id >> ch >> d;
            dist[i + 1][id] = d;
        }
    }
    for (int k = 1; k <= n; k++)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
            }
        }
    }
    vector<int> mxdist(n + 1, 0);
    int mnf = INT_MAX;
    for (auto& x : f)
    {
        for (auto& y : m)
        {
            mxdist[x] = max(mxdist[x], dist[y][x]);
        }
        mnf = min(mnf, mxdist[x]);
    }
    int mnm = INT_MAX;
    for (auto& x : m)
    {
        for (auto& y : f)
        {
            mxdist[x] = max(mxdist[x], dist[y][x]);
        }
        mnm = min(mnm, mxdist[x]);
    }
    vector<int> ans1, ans2;
    for (auto& x : f)
    {
        if (mxdist[x] == mnf)
        {
            ans1.push_back(x);
        }
    }
    for (auto& x : m)
    {
        if (mxdist[x] == mnm)
        {
            ans2.push_back(x);
        }
    }
    for (int i = 0; i < ans1.size(); i++)
    {
        if (i > 0)
            cout << " ";
        cout << ans1[i];
    }
    cout << endl;
    for (int i = 0; i < ans2.size(); i++)
    {
        if (i > 0)
            cout << " ";
        cout << ans2[i];
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