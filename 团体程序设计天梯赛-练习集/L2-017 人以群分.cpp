/*
  @pintia psid=994805046380707840 pid=994805061056577536 compiler=GXX
  ProblemSet: 团体程序设计天梯赛-练习集
  Title: 人以群分
  https://pintia.cn/problem-sets/994805046380707840/exam/problems/type/7?problemSetProblemId=994805061056577536
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
    vector<int> v(n);
    for (auto& x : v)
    {
        cin >> x;
    }
    sort(v.begin(), v.end());
    int a = 0, b = 0;
    for (int i = 0; i < n / 2; i++)
    {
        a += v[i];
    }
    for (int i = n / 2; i < n; i++)
    {
        b += v[i];
    }
    cout << "Outgoing #: " << n - n / 2 << endl;
    cout << "Introverted #: " << n / 2 << endl;
    cout << "Diff = " << abs(a - b) << endl;
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