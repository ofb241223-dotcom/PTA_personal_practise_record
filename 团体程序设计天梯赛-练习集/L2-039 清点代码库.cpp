/*
  @pintia psid=994805046380707840 pid=1386335159927652362 compiler=GXX
  ProblemSet: 团体程序设计天梯赛-练习集
  Title: 清点代码库
  https://pintia.cn/problem-sets/994805046380707840/exam/problems/type/7?problemSetProblemId=1386335159927652362
*/
// @pintia code=start
#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
const int M = 200005;
typedef long long ll;
typedef unsigned long long ull;
const ll mod = 1000000007;
bool cmp(const pair<vector<int>, int>& a, const pair<vector<int>, int>& b)
{
    if (a.second != b.second)
    {
        return a.second > b.second;
    }
    return a.first < b.first;
}
void solve()
{
    int n, m;
    cin >> n >> m;
    map<vector<int>, int> ans;
    while (n--)
    {
        vector<int> v(m);
        for (auto& x : v)
        {
            cin >> x;
        }
        ans[v]++;
    }
    cout << ans.size() << endl;
    vector<pair<vector<int>, int>> v;
    for (auto &[vec, cnt] : ans)
    {
        v.push_back({vec, cnt});
    }
    sort(v.begin(), v.end(), cmp);
    for (auto &[vec, cnt] : v)
    {
        cout << cnt << " ";
        for (int i = 0; i < vec.size(); i++)
        {
            if (i > 0)
            {
                cout << " ";
            }
            cout << vec[i];
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