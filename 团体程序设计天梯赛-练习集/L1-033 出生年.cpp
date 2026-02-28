/*
  @pintia psid=994805046380707840 pid=994805099426070528 compiler=GXX
  ProblemSet: 团体程序设计天梯赛-练习集
  Title: 出生年
  https://pintia.cn/problem-sets/994805046380707840/exam/problems/type/7?problemSetProblemId=994805099426070528
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
    int y, n, cnt = 0;
    cin >> y >> n;
    for (int i = y;; i++)
    {
        string s = to_string(i);
        while (s.size() < 4)
        {
            s = '0' + s;
        }
        set<char> st;
        for (auto x : s)
        {
            st.insert(x);
        }
        if (st.size() == n)
        {
            cout << cnt << " " << s;
            return;
        }
        cnt++;
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