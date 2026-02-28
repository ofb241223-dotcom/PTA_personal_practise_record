/*
  @pintia psid=994805046380707840 pid=994805068539215872 compiler=GXX
  ProblemSet: 团体程序设计天梯赛-练习集
  Title: 家庭房产
  https://pintia.cn/problem-sets/994805046380707840/exam/problems/type/7?problemSetProblemId=994805068539215872
*/
// @pintia code=start
#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
const int M = 200005;
typedef long long ll;
typedef unsigned long long ull;
const ll mod = 1000000007;
int fa[10000];
int find(int x)
{
    return fa[x] == x ? x : fa[x] = find(fa[x]);
}
void uni(int u, int v)
{
    int fu = find(u);
    int fv = find(v);
    if (fu < fv)
    {
        fa[fv] = fu;
    }
    else
    {
        fa[fu] = fv;
    }
}
vector<double> house(10000, 0);
vector<double> area(10000, 0);
struct node
{
    int cnt;
    double avg_house, avg_area;
};
bool cmp(const tuple<int, int, double, double>& a, const tuple<int, int, double, double>& b)
{
    auto [q, w, e, r] = a;
    auto [t, y, u, i] = b;
    if (r != i)
    {
        return r > i;
    }
    return q < t;
}
void solve()
{
    set<int> st;
    int n;
    cin >> n;
    for (int i = 0; i < 10000; i++)
    {
        fa[i] = i;
    }
    while (n--)
    {
        int id, father, mother, k;
        cin >> id >> father >> mother >> k;
        st.insert(id);
        if (father != -1)
        {
            uni(id, father);
            st.insert(father);
        }
        if (mother != -1)
        {
            uni(id, mother);
            st.insert(mother);
        }
        if (k != 0)
        {
            for (int i = 0; i < k; i++)
            {
                int son;
                cin >> son;
                st.insert(son);
                uni(id, son);
            }
        }
        cin >> house[id] >> area[id];
    }
    vector<node> v(10000);
    set<int> s;
    for (auto& x : st)
    {
        int fx = find(x);
        s.insert(fx);
        v[fx].cnt++;
        v[fx].avg_house += house[x];
        v[fx].avg_area += area[x];
    }
    vector<tuple<int, int, double, double>> ans;
    for (auto& x : s)
    {
        v[x].avg_house /= v[x].cnt;
        v[x].avg_area /= v[x].cnt;
        ans.push_back({x, v[x].cnt, v[x].avg_house, v[x].avg_area});
    }
    sort(ans.begin(), ans.end(), cmp);
    printf("%d\n", ans.size());
    for (auto& [a, b, c, d] : ans)
    {
        printf("%04d %d %.3f %.3f\n", a, b, c, d);
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