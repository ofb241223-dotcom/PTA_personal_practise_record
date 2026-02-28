/*
  @pintia psid=994805046380707840 pid=994805124398956544 compiler=GXX
  ProblemSet: 团体程序设计天梯赛-练习集
  Title: 跟奥巴马一起画方块
  https://pintia.cn/problem-sets/994805046380707840/exam/problems/type/7?problemSetProblemId=994805124398956544
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
    double n;
    char ch;
    cin >> n >> ch;
    int hang = (int)(n / 2 + 0.5);
    for (int i = 0; i < hang; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << ch;
        }
        cout << endl;
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