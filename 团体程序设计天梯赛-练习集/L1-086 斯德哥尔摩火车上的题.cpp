/*
  @pintia psid=994805046380707840 pid=1518581803354341376 compiler=GXX
  ProblemSet: 团体程序设计天梯赛-练习集
  Title: 斯德哥尔摩火车上的题
  https://pintia.cn/problem-sets/994805046380707840/exam/problems/type/7?problemSetProblemId=1518581803354341376
*/
// @pintia code=start
#include <bits/stdc++.h>
using namespace std;
string f(string a)
{
    string s = "";
    for (int i = 1; i < a.size(); i++)
    {
        if (a[i] % 2 == a[i - 1] % 2)
        {
            s += max(a[i], a[i - 1]);
        }
    }
    return s;
}
int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    string ans1, ans2;
    if (f(s1) == f(s2))
    {
        cout << f(s1);
    }
    else
    {
        cout << f(s1) << endl
             << f(s2);
    }
    return 0;
}

// @pintia code=end