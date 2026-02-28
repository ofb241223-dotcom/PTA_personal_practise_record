/*
  @pintia psid=994805046380707840 pid=994805097018540032 compiler=GXX
  ProblemSet: 团体程序设计天梯赛-练习集
  Title: 情人节
  https://pintia.cn/problem-sets/994805046380707840/exam/problems/type/7?problemSetProblemId=994805097018540032
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
    int cnt = 0;
    string s, a = "", b = "";
    while (cin >> s)
    {
        if (s == ".")
        {
            break;
        }
        cnt++;
        if (cnt == 2)
        {
            a = s;
        }
        if (cnt == 14)
        {
            b = s;
        }
    }
    if (cnt < 2)
    {
        cout << "Momo... No one is for you ...";
    }
    else if (cnt < 14)
    {
        cout << a << " is the only one for you...";
    }
    else
    {
        cout << a << " and " << b << " are inviting you to dinner...";
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