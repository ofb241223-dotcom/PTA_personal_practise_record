/*
  @pintia psid=994805046380707840 pid=1781658570803388421 compiler=GXX
  ProblemSet: 团体程序设计天梯赛-练习集
  Title: 兰州牛肉面
  https://pintia.cn/problem-sets/994805046380707840/exam/problems/type/7?problemSetProblemId=1781658570803388421
*/
// @pintia code=start
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<double> v(n);
    for (auto& x : v)
    {
        cin >> x;
    }
    int x, cnt = 0;
    double ans = 0;
    vector<int> a(n + 1);
    while (cin >> x >> cnt)
    {
        if (x == 0)
        {
            break;
        }
        a[x] += cnt;
        ans += cnt * v[x - 1];
    }
    for (int i = 1; i <= n; i++)
    {
        cout << a[i] << endl;
    }
    printf("%.2f", ans);
    return 0;
}

// @pintia code=end