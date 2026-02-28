/*
  @pintia psid=994805046380707840 pid=994805059118809088 compiler=GXX
  ProblemSet: 团体程序设计天梯赛-练习集
  Title: 功夫传人
  https://pintia.cn/problem-sets/994805046380707840/exam/problems/type/7?problemSetProblemId=994805059118809088
*/
// @pintia code=start
#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
const int M = 200005;
typedef long long ll;
typedef unsigned long long ull;
const ll mod = 1000000007;
int n;
double ans = 0, z, r;
vector<vector<int>> g(1e5 + 5);
vector<double> a(1e5 + 5, 0);
void dfs(int u)
{
    for (auto& v : g[u])
    {
        if (a[v] < 0)
        {
            double temp = -a[v];
            a[v] = a[u] * (1.0 - r / 100);
            a[v] = 1.0 * temp * a[v];
            ans += a[v];
        }
        else
        {
            a[v] = a[u] * (1.0 - r / 100);
        }
        dfs(v);
    }
}
void solve()
{
    cin >> n >> z >> r;
    a[0] = z;
    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        if (k == 0)
        {
            double p;
            cin >> p;
            a[i] = -p;
        }
        else
        {
            for (int j = 0; j < k; j++)
            {
                int id;
                cin >> id;
                g[i].push_back(id);
            }
        }
    }
    if (a[0] < 0)
    {
        double temp = -a[0];
        a[0] = z * temp;
        ans += a[0];
    }
    dfs(0);
    cout << (ll)ans << endl;
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