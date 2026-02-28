/*
  @pintia psid=994805046380707840 pid=994805145370476544 compiler=GXX
  ProblemSet: 团体程序设计天梯赛-练习集
  Title: 打印沙漏
  https://pintia.cn/problem-sets/994805046380707840/exam/problems/type/7?problemSetProblemId=994805145370476544
*/
// @pintia code=start
#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
const int M = 200005;
typedef long long ll;
typedef unsigned long long ull;
const ll mod = 1000000007;
int f(int x)
{
    return 2 * x * x + 4 * x + 1;
}
void solve()
{
    int n;
    char ch;
    cin >> n >> ch;
    int p = 0;
    for (int i = 0; i < 25; i++)
    {
        if (f(i) >= n)
        {
            if (f(i) == n)
            {
                p = i;
            }
            else
            {
                p = i - 1;
            }
            break;
        }
    }
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < i; j++)
            cout << " ";
        string s(2 * p + 1 - 2 * i, ch);
        cout << s << endl;
    }
    string s(p, ' ');
    cout << s << ch << endl;
    for (int i = p - 1; i >= 0; i--)
    {
        for (int j = i; j > 0; j--)
        {
            cout << " ";
        }
        string s(2 * p + 1 - 2 * i, ch);
        cout << s << endl;
    }
    cout << n - f(p);
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