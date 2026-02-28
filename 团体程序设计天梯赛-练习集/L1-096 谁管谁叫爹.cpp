/*
  @pintia psid=994805046380707840 pid=1649748772841508871 compiler=GXX
  ProblemSet: 团体程序设计天梯赛-练习集
  Title: 谁管谁叫爹
  https://pintia.cn/problem-sets/994805046380707840/exam/problems/type/7?problemSetProblemId=1649748772841508871
*/
// @pintia code=start
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string sa, sb;
        cin >> sa >> sb;
        ll a = stoll(sa), b = stoll(sb);
        int na = 0, nb = 0;
        for (auto& x : sa)
        {
            na += x - '0';
        }
        for (auto& x : sb)
        {
            nb += x - '0';
        }
        if (a % nb == 0 && b % na == 0)
        {
            if (a > b)
            {
                cout << "A" << endl;
            }
            else
            {
                cout << "B" << endl;
            }
        }
        else if (a % nb == 0)
        {
            cout << "A" << endl;
        }
        else if (b % na == 0)
        {
            cout << "B" << endl;
        }
        else
        {
            if (a > b)
            {
                cout << "A" << endl;
            }
            else
            {
                cout << "B" << endl;
            }
        }
    }
    return 0;
}

// @pintia code=end