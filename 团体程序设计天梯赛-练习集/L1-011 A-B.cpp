/*
  @pintia psid=994805046380707840 pid=994805130426171392 compiler=GXX
  ProblemSet: 团体程序设计天梯赛-练习集
  Title: A-B
  https://pintia.cn/problem-sets/994805046380707840/exam/problems/type/7?problemSetProblemId=994805130426171392
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
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    unordered_set<char> us;
    for (auto x : s2)
    {
        us.insert(x);
    }
    for (auto x : s1)
    {
        if (!us.count(x))
        {
            cout << x;
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