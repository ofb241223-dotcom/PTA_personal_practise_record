/*
  @pintia psid=994805046380707840 pid=994805061769609216 compiler=GXX
  ProblemSet: 团体程序设计天梯赛-练习集
  Title: 愿天下有情人都是失散多年的兄妹
  https://pintia.cn/problem-sets/994805046380707840/exam/problems/type/7?problemSetProblemId=994805061769609216
*/
// @pintia code=start
#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
const int M = 200005;
typedef long long ll;
typedef unsigned long long ull;
const ll mod = 1000000007;
int n, k;
struct node
{
    int fa = -1, mo = -1;
    char sex;
};
vector<node> g(100005);
void dfs(int id, unordered_set<int>& s, int dep)
{
    if (dep == 4)
    {
        return;
    }
    if (g[id].fa != -1)
    {
        s.insert(g[id].fa);
        dfs(g[id].fa, s, dep + 1);
    }
    if (g[id].mo != -1)
    {
        s.insert(g[id].mo);
        dfs(g[id].mo, s, dep + 1);
    }
}
void solve()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int id, fa, mo;
        char s;
        cin >> id >> s >> fa >> mo;
        g[id].sex = s;
        g[id].fa = fa;
        g[id].mo = mo;
        if (fa != -1)
        {
            g[fa].sex = 'M';
        }
        if (mo != -1)
        {
            g[mo].sex = 'F';
        }
    }
    cin >> k;
    while (k--)
    {
        int id1, id2;
        cin >> id1 >> id2;
        if (g[id1].sex == g[id2].sex)
        {
            cout << "Never Mind" << endl;
        }
        else
        {
            unordered_set<int> s1, s2;
            dfs(id1, s1, 0);
            dfs(id2, s2, 0);
            bool f = 1;
            for (auto& x : s1)
            {
                if (s2.count(x))
                {
                    f = 0;
                    break;
                }
            }
            if (f == 0)
            {
                cout << "No" << endl;
            }
            else
            {
                cout << "Yes" << endl;
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