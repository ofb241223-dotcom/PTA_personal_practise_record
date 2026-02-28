/*
  @pintia psid=994805046380707840 pid=994805084284633088 compiler=GXX
  ProblemSet: 团体程序设计天梯赛-练习集
  Title: 整除光棍
  https://pintia.cn/problem-sets/994805046380707840/exam/problems/type/7?problemSetProblemId=994805084284633088
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
    ll t = 1;
    ll x;
    cin >> x;
    int cnt = 1;
    while (t % x != 0 || t < 0)
    {
        t = t * 10 + 1;
        cnt++;
    }
    cout << t / x << " " << cnt;
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