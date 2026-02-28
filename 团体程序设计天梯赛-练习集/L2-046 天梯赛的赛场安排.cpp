/*
  @pintia psid=994805046380707840 pid=1649748772841508873 compiler=GXX
  ProblemSet: 团体程序设计天梯赛-练习集
  Title: 天梯赛的赛场安排
  https://pintia.cn/problem-sets/994805046380707840/exam/problems/type/7?problemSetProblemId=1649748772841508873
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
    int n, c;
    cin >> n >> c;
    vector<int> plus;
    vector<pair<string, int>> v;
    priority_queue<pair<int, string>> q;
    for (int i = 0; i < n; i++)
    {
        pair<int, string> p;
        cin >> p.second >> p.first;
        q.push(p);
        v.push_back({p.second, p.first});
    }
    map<string, int> mp;
    int sum = 0;
    while (!q.empty())
    {
        auto [x, y] = q.top();
        q.pop();
        if (x >= c)
        {
            x -= c;
            mp[y]++;
            sum++;
        }
        else
        {
            int mn = INT_MAX;
            int id = -1;
            for (int i = 0; i < plus.size(); i++)
            {
                if (plus[i] >= x)
                {
                    if (mn >= plus[i])
                    {
                        mn = plus[i];
                        id = i;
                    }
                }
            }
            if (id >= 0)
            {
                plus[id] -= x;
                mp[y]++;
            }
            else
            {
                mp[y]++;
                sum++;
                plus.push_back(c - x);
            }
            x = 0;
        }
        if (x > 0)
        {
            q.push({x, y});
        }
    }
    for (auto& x : v)
    {
        cout << x.first << " " << mp[x.first] << endl;
    }
    cout << sum;
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