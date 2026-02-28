/*
  @pintia psid=994805046380707840 pid=994805082313310208 compiler=GXX
  ProblemSet: 团体程序设计天梯赛-练习集
  Title: 矩阵A乘以B
  https://pintia.cn/problem-sets/994805046380707840/exam/problems/type/7?problemSetProblemId=994805082313310208
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
    int a, b, c, d;
    cin >> a >> b;
    vector<vector<int>> x(a, vector<int>(b));
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cin >> x[i][j];
        }
    }
    cin >> c >> d;
    vector<vector<int>> y(c, vector<int>(d));
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < d; j++)
        {
            cin >> y[i][j];
        }
    }
    if (b != c)
    {
        cout << "Error: " << b << " != " << c;
        return;
    }
    cout << a << " " << d << endl;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < d; j++)
        {
            if (j != 0)
            {
                cout << " ";
            }
            int sum = 0;
            for (int p = 0; p < b; p++)
            {
                sum += x[i][p] * y[p][j];
            }
            cout << sum;
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