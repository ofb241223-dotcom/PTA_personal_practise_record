/*
  @pintia psid=994805046380707840 pid=994805118568873984 compiler=GXX
  ProblemSet: 团体程序设计天梯赛-练习集
  Title: 谁先倒
  https://pintia.cn/problem-sets/994805046380707840/exam/problems/type/7?problemSetProblemId=994805118568873984
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
    int x, y, n, suma = 0, sumb = 0;
    cin >> x >> y >> n;
    while (n--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if (b == a + c && d != a + c)
        {
            suma++;
            if (suma > x)
            {
                cout << "A" << endl
                     << sumb;
                return;
            }
        }
        if (b != a + c && d == a + c)
        {
            sumb++;
            if (sumb > y)
            {
                cout << "B" << endl
                     << suma;
                return;
            }
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