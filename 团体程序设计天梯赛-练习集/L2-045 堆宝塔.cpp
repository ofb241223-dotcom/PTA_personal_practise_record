/*
  @pintia psid=994805046380707840 pid=1649748772841508872 compiler=GXX
  ProblemSet: 团体程序设计天梯赛-练习集
  Title: 堆宝塔
  https://pintia.cn/problem-sets/994805046380707840/exam/problems/type/7?problemSetProblemId=1649748772841508872
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
    int n, cnt = 0, ans = 0;
    cin >> n;
    stack<int> a, b;
    for (int i = 0; i < n; i++)
    {
        int c;
        cin >> c;
        if (a.empty() || a.top() > c)
        {
            a.push(c);
        }
        else
        {
            if (b.empty() || b.top() < c)
            {
                b.push(c);
            }
            else
            {
                cnt = max(cnt, (int)a.size());
                ans++;
                while (!a.empty())
                {
                    a.pop();
                }
                while(!b.empty() && b.top() > c)
                {
                    a.push(b.top());
                    b.pop();
                }
                a.push(c);
            }
        }
    }
    if (!a.empty())
    {
        cnt = max(cnt, (int)a.size());
        ans++;
    }
    if (!b.empty())
    {
        cnt = max(cnt, (int)a.size());
        ans++;
    }
    cout << ans << " " << cnt;
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