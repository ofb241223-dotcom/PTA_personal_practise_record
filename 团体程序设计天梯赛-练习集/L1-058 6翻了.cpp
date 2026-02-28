/*
  @pintia psid=994805046380707840 pid=1111914599408664577 compiler=GXX
  ProblemSet: 团体程序设计天梯赛-练习集
  Title: 6翻了
  https://pintia.cn/problem-sets/994805046380707840/exam/problems/type/7?problemSetProblemId=1111914599408664577
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
    int n = s.size();
    string ans = "";
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '6')
        {
            int j = i;
            int cnt = 0;
            while (j < n && s[j] == '6')
            {
                j++;
                cnt++;
            }
            if (cnt > 9)
            {
                ans += "27";
            }
            else if (cnt > 3)
            {
                ans += "9";
            }
            else
            {
                for (int k = 0; k < cnt; k++)
                {
                    ans += '6';
                }
            }
            i = j - 1;
        }
        else
        {
            ans += s[i];
        }
    }
    cout << ans << endl;
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