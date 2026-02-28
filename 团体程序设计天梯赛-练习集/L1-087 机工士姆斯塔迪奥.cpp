/*
  @pintia psid=994805046380707840 pid=1518581903422062592 compiler=GXX
  ProblemSet: 团体程序设计天梯赛-练习集
  Title: 机工士姆斯塔迪奥
  https://pintia.cn/problem-sets/994805046380707840/exam/problems/type/7?problemSetProblemId=1518581903422062592
*/
// @pintia code=start
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n, m, q;
    cin >> n >> m >> q;
    set<int> row, col;
    for (int i = 0; i < q; i++)
    {
        int t, c;
        cin >> t >> c;
        if (t == 0)
        {
            row.insert(c);
        }
        else
        {
            col.insert(c);
        }
    }
    ll a = n - row.size(), b = m - col.size();
    cout << a * b;
    return 0;
}

// @pintia code=end