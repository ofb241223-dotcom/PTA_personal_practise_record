/*
  @pintia psid=994805046380707840 pid=994805067704549376 compiler=GXX
  ProblemSet: 团体程序设计天梯赛-练习集
  Title: 最长对称子串
  https://pintia.cn/problem-sets/994805046380707840/exam/problems/type/7?problemSetProblemId=994805067704549376
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
    string s;
    getline(cin, s);
    int len = s.size();
    for (int i = len; i >= 1; i--)
    {
        for (int j = 0; j + i - 1 < len; j++)
        {
            string temp1 = s.substr(j, i);
            string temp2 = temp1;
            reverse(temp1.begin(), temp1.end());
            if (temp1 == temp2)
            {
                cout << i;
                return;
            }
        }
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