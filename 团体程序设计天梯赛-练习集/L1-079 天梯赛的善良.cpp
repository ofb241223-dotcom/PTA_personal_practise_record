/*
  @pintia psid=994805046380707840 pid=1386335159927652358 compiler=GXX
  ProblemSet: 团体程序设计天梯赛-练习集
  Title: 天梯赛的善良
  https://pintia.cn/problem-sets/994805046380707840/exam/problems/type/7?problemSetProblemId=1386335159927652358
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
    int mx = -1, mn = INT_MAX;
    vector<int> a(1000005, 0);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a[x]++;
        if (mx < x)
        {
            mx = x;
        }
        if (mn > x)
        {
            mn = x;
        }
    }
    cout << mn << " " << a[mn] << endl
         << mx << " " << a[mx];
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