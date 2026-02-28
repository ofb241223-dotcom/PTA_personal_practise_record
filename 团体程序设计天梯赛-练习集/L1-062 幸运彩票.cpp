/*
  @pintia psid=994805046380707840 pid=1111914599412858883 compiler=GXX
  ProblemSet: 团体程序设计天梯赛-练习集
  Title: 幸运彩票
  https://pintia.cn/problem-sets/994805046380707840/exam/problems/type/7?problemSetProblemId=1111914599412858883
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
    while (n--)
    {
        string s;
        cin >> s;
        int a = 0;
        for (int i = 0; i < 3; i++)
        {
            a += s[i] - '0';
        }
        int b = 0;
        for (int i = 3; i < 6; i++)
        {
            b += s[i] - '0';
        }
        cout << ((a == b) ? "You are lucky!" : "Wish you good luck.") << endl;
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