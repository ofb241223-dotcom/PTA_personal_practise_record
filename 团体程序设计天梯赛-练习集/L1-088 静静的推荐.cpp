/*
  @pintia psid=994805046380707840 pid=1518582000729911296 compiler=GXX
  ProblemSet: 团体程序设计天梯赛-练习集
  Title: 静静的推荐
  https://pintia.cn/problem-sets/994805046380707840/exam/problems/type/7?problemSetProblemId=1518582000729911296
*/
// @pintia code=start
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, s;
    cin >> n >> k >> s;
    map<int, int> mp;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        if (a >= 175)
        {
            if (b >= s)
            {
                ans++;
            }
            else
            {
                mp[a]++;
            }
        }
    }
    // cout << ans << endl;
    // for (auto& x : mp)
    // {
    //     cout << x.first << ": " << x.second << endl;
    // }
    for (int i = 0; i < k; i++)
    {
        for (auto& x : mp)
        {
            if (x.second > 0)
            {
                ans++;
            }
            x.second--;
        }
    }
    cout << ans;
    return 0;
}

// @pintia code=end