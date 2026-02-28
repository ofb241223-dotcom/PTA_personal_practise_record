/*
  @pintia psid=994805046380707840 pid=994805074646122496 compiler=GXX
  ProblemSet: 团体程序设计天梯赛-练习集
  Title: 猜数字
  https://pintia.cn/problem-sets/994805046380707840/exam/problems/type/7?problemSetProblemId=994805074646122496
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
    double sum = 0;
    int n;
    cin >> n;
    vector<pair<string, double>> v(n);
    for (auto& x : v)
    {
        cin >> x.first >> x.second;
        sum += x.second;
    }
    sum /= n;
    sum /= 2;
    cout << (int)sum << " ";
    pair<string, double> ans = v[0];
    for (int i = 1; i < n; i++)
    {
        if (abs(ans.second - sum) > abs(v[i].second - sum))
        {
            ans = v[i];
        }
    }
    cout << ans.first;
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