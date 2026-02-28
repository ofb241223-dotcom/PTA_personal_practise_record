/*
  @pintia psid=994805046380707840 pid=1649748772841508870 compiler=GXX
  ProblemSet: 团体程序设计天梯赛-练习集
  Title: 分寝室
  https://pintia.cn/problem-sets/994805046380707840/exam/problems/type/7?problemSetProblemId=1649748772841508870
*/
// @pintia code=start
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n0, n1, n;
    cin >> n0 >> n1 >> n;
    tuple<int, int, int> ans = {INT_MAX, INT_MAX, INT_MAX};
    for (int i = 1; i < n; i++)
    {
        if (n0 % i == 0 && n1 % (n - i) == 0 && n0 / i > 1 && n1 / (n - i) > 1)
        {
            int x = abs(n0 / i - n1 / (n - i));
            if (x < get<2>(ans))
            {
                ans = {i, n - i, x};
            }
        }
    }
    if (get<2>(ans) == INT_MAX)
    {
        cout << "No Solution";
    }
    else
    {
        cout << get<0>(ans) << " " << get<1>(ans);
    }
    return 0;
}

// @pintia code=end