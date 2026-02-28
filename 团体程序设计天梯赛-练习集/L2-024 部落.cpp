/*
  @pintia psid=994805046380707840 pid=994805056736444416 compiler=GXX
  ProblemSet: 团体程序设计天梯赛-练习集
  Title: 部落
  https://pintia.cn/problem-sets/994805046380707840/exam/problems/type/7?problemSetProblemId=994805056736444416
*/
// @pintia code=start
#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
const int M = 200005;
typedef long long ll;
typedef unsigned long long ull;
const ll mod = 1000000007;
int fa[10005];
int find(int x)
{
    return fa[x] == x ? x : fa[x] = find(fa[x]);
}
void solve()
{
    int n;
    cin >> n;
    for (int i = 1; i <= 10000; i++)
    {
        fa[i] = i;
    }
    set<int> cnt;
    while (n--)
    {
        int k, x;
        cin >> k >> x;
        cnt.insert(x);
        int fx = find(x);
        for (int i = 1; i < k; i++)
        {
            int t;
            cin >> t;
            int ft = find(t);
            if (ft != fx)
            {
                fa[ft] = fx;
            }
            cnt.insert(t);
        }
    }
    cout << cnt.size() << " ";
    set<int> st;
    for (int i = 1; i <= cnt.size(); i++)
    {
        st.insert(find(i));
    }
    cout << st.size() << endl;
    int q;
    cin >> q;
    while (q--)
    {
        int u, v;
        cin >> u >> v;
        int fu = find(u), fv = find(v);
        if (fu == fv)
        {
            cout << "Y" << endl;
        }
        else
        {
            cout << "N" << endl;
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