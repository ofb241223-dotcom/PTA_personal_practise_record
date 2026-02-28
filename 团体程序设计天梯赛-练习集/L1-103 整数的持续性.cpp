/*
  @pintia psid=994805046380707840 pid=1781658570803388422 compiler=GXX
  ProblemSet: 团体程序设计天梯赛-练习集
  Title: 整数的持续性
  https://pintia.cn/problem-sets/994805046380707840/exam/problems/type/7?problemSetProblemId=1781658570803388422
*/
// @pintia code=start
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    vector<pair<int, int>> v;
    int mx = INT_MIN;
    set<int> ans;
    for (int i = a; i <= b; i++)
    {
        string s = to_string(i);
        int cnt = 0;
        while (s.size() > 1)
        {
            int x = 1;
            for (auto& ch : s)
            {
                x *= ch - '0';
            }
            s = to_string(x);
            cnt++;
        }
        v.push_back({i, cnt});
        mx = max(mx, cnt);
    }
    for (auto& x : v)
    {
        if (x.second == mx)
        {
            ans.insert(x.first);
        }
    }
    cout << mx << endl;
    for (auto it = ans.begin(); it != ans.end(); ++it)
    {
        if (it != ans.begin())
        {
            cout << " ";
        }
        cout << *it;
    }
    return 0;
}

// @pintia code=end