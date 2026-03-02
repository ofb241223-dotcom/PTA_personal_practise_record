/*
  @pintia psid=994805046380707840 pid=994805055679479808 compiler=GXX
  ProblemSet: 团体程序设计天梯赛-练习集
  Title: 小字辈
  https://pintia.cn/problem-sets/994805046380707840/exam/problems/type/7?problemSetProblemId=994805055679479808
*/
// @pintia code=start
#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
const int M = 200005;
typedef long long ll;
typedef unsigned long long ull;
const ll mod = 1000000007;
vector<int> g[100005];
int dep;
vector<int> d(100005);
void dfs(int root, int step)
{
    d[root] = step;
    for (auto& v : g[root])
    {
        dfs(v, step + 1);
    }
    if (g[root].empty())
    {
        dep = max(dep, step);
        return;
    }
}
void solve()
{
    int n;
    cin >> n;
    int root;
    vector<int> pre(n + 1);
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        if (x == -1)
        {
            root = i;
        }
        else
        {
            g[x].push_back(i);
        }
        pre[i] = x;
    }
    dfs(root, 1);
    cout << dep << endl;
    set<int> st;
    for (int i = 1; i <= n; i++)
    {
        if (d[i] == dep)
        {
            st.insert(i);
        }
    }
    for (auto i = st.begin(); i != st.end(); i++)
    {
        if (i != st.begin())
        {
            cout << " ";
        }
        cout << *i;
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