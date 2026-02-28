/*
  @pintia psid=994805046380707840 pid=994805140211482624 compiler=GXX
  ProblemSet: 团体程序设计天梯赛-练习集
  Title: 考试座位号
  https://pintia.cn/problem-sets/994805046380707840/exam/problems/type/7?problemSetProblemId=994805140211482624
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
    map<int, pair<string, int>> mp;
    int n, m;
    cin >> n;
    while (n--)
    {
        string s;
        int a, b;
        cin >> s >> a >> b;
        mp[a] = {s, b};
    }
    cin >> m;
    while (m--)
    {
        int a;
        cin >> a;
        cout << mp[a].first << " " << mp[a].second << endl;
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