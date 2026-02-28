/*
  @pintia psid=994805046380707840 pid=994805071789801472 compiler=GXX
  ProblemSet: 团体程序设计天梯赛-练习集
  Title: 月饼
  https://pintia.cn/problem-sets/994805046380707840/exam/problems/type/7?problemSetProblemId=994805071789801472
*/
// @pintia code=start
#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
const int M = 200005;
typedef long long ll;
typedef unsigned long long ull;
const ll mod = 1000000007;
bool cmp(const pair<int, int>& a, const pair<int, int>& b)
{
    return 1.0 * a.second / a.first > 1.0 * b.second / b.first;
}
void solve()
{
    int n, d;
    cin >> n >> d;
    vector<pair<double, double>> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first;
    }
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].second;
    }
    double ans = 0;
    sort(v.begin(), v.end(), cmp);
    for (int i = 0; i < n && d > 0; i++)
    {
        if (d >= v[i].first)
        {
            d -= v[i].first;
            ans += v[i].second;
        }
        else
        {
            ans += 1.0 * v[i].second / v[i].first * d;
            d = 0;
        }
    }
    printf("%.2f", ans);
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