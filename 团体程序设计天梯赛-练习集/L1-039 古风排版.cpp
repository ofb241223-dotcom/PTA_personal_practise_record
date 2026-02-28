/*
  @pintia psid=994805046380707840 pid=994805091888906240 compiler=GXX
  ProblemSet: 团体程序设计天梯赛-练习集
  Title: 古风排版
  https://pintia.cn/problem-sets/994805046380707840/exam/problems/type/7?problemSetProblemId=994805091888906240
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
    int n;
    cin >> n;
    string s;
    cin.ignore();
    getline(cin, s);
    int len = s.size();
    int cnt = s.size() / n + (s.size() % n ? 1 : 0);
    for (int i = 0; i < n; i++)
    {
        int x = cnt - 1;
        for (int j = 0; j < cnt; j++)
        {
            if (n * x + i >= len)
            {
                cout << " ";
            }
            else
            {
                cout << s[n * x + i];
            }
            x--;
        }
        cout << endl;
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