/*
  @pintia psid=994805046380707840 pid=1913922872972247044 compiler=GXX
  ProblemSet: 团体程序设计天梯赛-练习集
  Title: 这是字符串题
  https://pintia.cn/problem-sets/994805046380707840/exam/problems/type/7?problemSetProblemId=1913922872972247044
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
    vector<pair<int, int>> v(26);
    for (auto& x : v)
    {
        cin >> x.first;
    }
    int ans = 0;
    for (auto& x : s)
    {
        v[x - 'a'].second++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (i > 0)
        {
            cout << " ";
        }
        cout << v[i].second;
        ans += v[i].first * v[i].second;
    }
    cout << endl
         << ans;
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