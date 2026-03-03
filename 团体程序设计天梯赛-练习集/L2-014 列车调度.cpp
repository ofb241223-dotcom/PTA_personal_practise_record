/*
  @pintia psid=994805046380707840 pid=994805063166312448 compiler=GXX
  ProblemSet: 团体程序设计天梯赛-练习集
  Title: 列车调度
  https://pintia.cn/problem-sets/994805046380707840/exam/problems/type/7?problemSetProblemId=994805063166312448
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
    vector<deque<int>> v;
    vector<int> a(n);
    for (auto& x : a)
    {
        cin >> x;
    }
    vector<int> tails;
    for (auto &x : a)
    {
        if (tails.empty())
        {
            tails.push_back(x);
            continue;
        }
        auto pos = lower_bound(tails.begin(), tails.end(), x) - tails.begin();
        if (pos < tails.size())
        {
            tails[pos] = x;
        }
        else
        {
            tails.push_back(x);
        }
    }
    cout << tails.size();
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