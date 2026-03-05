/*
  @pintia psid=994805046380707840 pid=1111914599412858889 compiler=GXX
  ProblemSet: 团体程序设计天梯赛-练习集
  Title: 彩虹瓶
  https://pintia.cn/problem-sets/994805046380707840/exam/problems/type/7?problemSetProblemId=1111914599412858889
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
    while (k--)
    {
        stack<int> sk;
        int cur = 1;
        vector<int> v(n);
        for (auto &x : v)
        {
            cin >> x;
        }
        for (auto &x : v)
        {
            if (x != cur)
            {
                if (sk.size() >= m)
                {
                    break;
                }
                else
                {
                    sk.push(x);
                }
            }
            else
            {
                cur++;
                while (!sk.empty() && sk.top() == cur)
                {
                    cur++;
                    sk.pop();
                }
            }
        }
        if (sk.empty())
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
int main()
{
    // ios::sync_with_stdio(false);
    // cin.tie(nullptr);
    int t = 1;
    // cin >> t;
    while (t--)
        solve();
    return 0;
}
// @pintia code=end