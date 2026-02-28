/*
  @pintia psid=994805046380707840 pid=994805057298481152 compiler=GXX
  ProblemSet: 团体程序设计天梯赛-练习集
  Title: 图着色问题
  https://pintia.cn/problem-sets/994805046380707840/exam/problems/type/7?problemSetProblemId=994805057298481152
*/
// @pintia code=start
#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
const int M = 200005;
typedef long long ll;
typedef unsigned long long ull;
const ll mod = 1000000007;
struct edge
{
    int u, v;
};
vector<edge> edges;
void solve()
{
    int v, e, k;
    cin >> v >> e >> k;
    for (int i = 0; i < e; i++)
    {
        int u, v;
        cin >> u >> v;
        edges.push_back({u, v});
    }
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        vector<int> a(v + 1);
        set<int> st;
        for (int i = 1; i <= v; i++)
        {
            cin >> a[i];
            st.insert(a[i]);
        }
        bool f = 0;
        if (st.size() != k)
        {
            f = 1;
        }
        for (auto &[u, v] : edges)
        {
            if (a[u] == a[v])
            {
                f = 1;
                break;
            }
        }
        if (f == 1)
        {
            cout << "No" << endl;
        }
        else
        {
            cout << "Yes" << endl;
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