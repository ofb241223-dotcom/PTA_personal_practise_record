/*
  @pintia psid=994805046380707840 pid=994805070149828608 compiler=GXX
  ProblemSet: 团体程序设计天梯赛-练习集
  Title: 集合相似度
  https://pintia.cn/problem-sets/994805046380707840/exam/problems/type/7?problemSetProblemId=994805070149828608
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
    vector<unordered_set<int>> v;
    while (n--)
    {
        int k;
        cin >> k;
        unordered_set<int> st;
        for (int i = 0; i < k; i++)
        {
            int x;
            cin >> x;
            st.insert(x);
        }
        v.push_back(st);
    }
    int m;
    cin >> m;
    while (m--)
    {
        int x, y;
        cin >> x >> y;
        x--, y--;
        int nc = 0;
        for (auto &p : v[x])
        {
            if (v[y].count(p))
            {
                nc++;
            }
        }
        int nt = v[x].size() + v[y].size() - nc;
        double ans = 1.0 * nc / nt * 100;
        printf("%.2f%%\n", ans);
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