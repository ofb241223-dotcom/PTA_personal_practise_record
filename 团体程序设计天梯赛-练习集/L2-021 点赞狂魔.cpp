/*
  @pintia psid=994805046380707840 pid=994805058485469184 compiler=GXX
  ProblemSet: 团体程序设计天梯赛-练习集
  Title: 点赞狂魔
  https://pintia.cn/problem-sets/994805046380707840/exam/problems/type/7?problemSetProblemId=994805058485469184
*/
// @pintia code=start
#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
const int M = 200005;
typedef long long ll;
typedef unsigned long long ull;
const ll mod = 1000000007;
bool cmp(const pair<string, pair<int, double>>& a, const pair<string, pair<int, double>>& b)
{
    if (a.second.first != b.second.first)
    {
        return a.second.first > b.second.first;
    }
    return a.second.second < b.second.second;
}
void solve()
{
    int n;
    cin >> n;
    vector<pair<string, pair<int, double>>> ans;
    for (int i = 0; i < n; i++)
    {
        string name;
        cin >> name;
        int k;
        cin >> k;
        set<int> st;
        for (int j = 0; j < k; j++)
        {
            int x;
            cin >> x;
            st.insert(x);
        }
        ans.push_back({name, {st.size(), 1.0 * k / st.size()}});
    }
    sort(ans.begin(), ans.end(), cmp);
    if (ans.size() >= 3)
    {
        for (int i = 0; i < 3; i++)
        {
            if (i > 0)
            {
                cout << " ";
            }
            cout << ans[i].first;
        }
    }
    else
    {
        for (int i = 0; i < ans.size(); i++)
        {
            if (i > 0)
            {
                cout << " ";
            }
            cout << ans[i].first;
        }
        for (int i = 0; i < 3 - ans.size()
        ; i++)
        {
            cout << " -";
        }
    }
    // for (auto &[x, y] : ans)
    // {
    //     cout << x << " " << y.first << endl;
    // }
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