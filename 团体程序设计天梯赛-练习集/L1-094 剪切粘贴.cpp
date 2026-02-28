/*
  @pintia psid=994805046380707840 pid=1649748772841508869 compiler=GXX
  ProblemSet: 团体程序设计天梯赛-练习集
  Title: 剪切粘贴
  https://pintia.cn/problem-sets/994805046380707840/exam/problems/type/7?problemSetProblemId=1649748772841508869
*/
// @pintia code=start
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int l, r;
        string a, b;
        cin >> l >> r >> a >> b;
        // cin.ignore();
        // getline(cin, a);
        // getline(cin, b);
        string temp = s.substr(l - 1, r - l + 1);
        s = s.substr(0, l - 1) + s.substr(r);
        size_t pos = s.find(a + b);
        if (pos == string::npos)
        {
            s += temp;
            continue;
        }
        s = s.substr(0, pos + a.size()) + temp + s.substr(pos + a.size());
    }
    cout << s;
    return 0;
}
// @pintia code=end