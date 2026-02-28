/*
  @pintia psid=994805046380707840 pid=994805121500692480 compiler=GXX
  ProblemSet: 团体程序设计天梯赛-练习集
  Title: 到底有多二
  https://pintia.cn/problem-sets/994805046380707840/exam/problems/type/7?problemSetProblemId=994805121500692480
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
    string s;
    cin >> s;
    int cnt = 0;
    int len = s.size();
    for (auto x : s)
    {
        if (x == '2')
        {
            cnt++;
        }
    }
    double p = 1;
    if ((s[len - 1] - '0') % 2 == 0)
    {
        p *= 2;
    }
    if (s[0] == '-')
    {
        p *= 1.5;
        len--;
    }

    double ans = 1.0 * cnt / len * p * 100;
    printf("%.2f", ans);
    cout << "%";
}
int main()
{
    int t = 1;
    // cin >> t;
    while (t--)
        solve();
    return 0;
}
// @pintia code=end