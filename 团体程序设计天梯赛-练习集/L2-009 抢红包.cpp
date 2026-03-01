/*
  @pintia psid=994805046380707840 pid=994805066890854400 compiler=GXX
  ProblemSet: 团体程序设计天梯赛-练习集
  Title: 抢红包
  https://pintia.cn/problem-sets/994805046380707840/exam/problems/type/7?problemSetProblemId=994805066890854400
*/
// @pintia code=start
#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
const int M = 200005;
typedef long long ll;
typedef unsigned long long ull;
const ll mod = 1000000007;
bool cmp(const tuple<int, double, int>& p, const tuple<int, double, int>& q)
{
    auto [x, y, z] = p;
    auto [a, b, c] = q;
    if (y != b)
    {
        return y > b;
    }
    if (z != c)
    {
        return z > c;
    }
    return x < a;
}
void solve()
{
    int n;
    cin >> n;
    vector<double> v(n + 1);
    vector<int> cnt(n + 1);
    for (int i = 1; i <= n; i++)
    {
        int k, sum = 0;
        cin >> k;
        for (int j = 0; j < k; j++)
        {
            set<int> st;
            int N, P;
            cin >> N >> P;
            if (st.count(N))
            {
                continue;
            }
            st.insert(N);
            v[N] += P;
            sum += P;
            cnt[N]++;
        }
        v[i] -= sum;
    }
    vector<tuple<int, double, int>> ans;
    for (int i = 1; i <= n; i++)
    {
        v[i] /= 100;
        ans.push_back({i, v[i], cnt[i]});
    }
    sort(ans.begin(), ans.end(), cmp);
    for (auto &[x, y, z] : ans)
    {
        cout << fixed << setprecision(2) << x << " " << y << endl;
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