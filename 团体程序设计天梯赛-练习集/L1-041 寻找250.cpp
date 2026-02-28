/*
  @pintia psid=994805046380707840 pid=994805089657536512 compiler=GXX
  ProblemSet: 团体程序设计天梯赛-练习集
  Title: 寻找250
  https://pintia.cn/problem-sets/994805046380707840/exam/problems/type/7?problemSetProblemId=994805089657536512
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
    int n, cnt = 0;
    while (cin >> n)
    {
        cnt++;
        if (n == 250)
        {
            cout << cnt;
            return;
        }
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