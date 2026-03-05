/*
  @pintia psid=994805046380707840 pid=1386335159927652360 compiler=GXX
  ProblemSet: 团体程序设计天梯赛-练习集
  Title: 包装机
  https://pintia.cn/problem-sets/994805046380707840/exam/problems/type/7?problemSetProblemId=1386335159927652360
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
    int n, m, s;
    cin >> n >> m >> s;
    vector<queue<char>> v(n + 1);
    vector<int> op;
    stack<char> sk;
    vector<char> ans;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            char x;
            cin >> x;
            v[i].push(x);
        }
    }
    int num;
    while (cin >> num)
    {
        if (num == -1)
        {
            break;
        }
        op.push_back(num);
    }
    for (auto &x : op)
    {
        if (x == 0)
        {
            if (!sk.empty())
            {
                ans.push_back(sk.top());
                sk.pop();
            }
        }
        else
        {
            if (!v[x].empty())
            {
                if (sk.size() == s)
                {
                    ans.push_back(sk.top());
                    sk.pop();
                }
                sk.push(v[x].front());
                v[x].pop();
            }
        }
    }
    for (auto &x : ans)
    {
        cout << x;
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