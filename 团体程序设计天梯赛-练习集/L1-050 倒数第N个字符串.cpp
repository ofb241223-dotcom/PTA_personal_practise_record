/*
  @pintia psid=994805046380707840 pid=994805080346181632 compiler=GXX
  ProblemSet: 团体程序设计天梯赛-练习集
  Title: 倒数第N个字符串
  https://pintia.cn/problem-sets/994805046380707840/exam/problems/type/7?problemSetProblemId=994805080346181632
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
    int l, n;
    cin >> l >> n;
    string s = "";
    n--;
    while (n)
    {
        int x = 25 - n % 26;
        s = (char)('a' + x) + s;
        n /= 26;
    }
    while (s.size() < l)
    {
        s = 'z' + s;
    }
    cout << s;
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