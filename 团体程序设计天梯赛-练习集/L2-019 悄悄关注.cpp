/*
  @pintia psid=994805046380707840 pid=994805059731177472 compiler=GXX
  ProblemSet: 团体程序设计天梯赛-练习集
  Title: 悄悄关注
  https://pintia.cn/problem-sets/994805046380707840/exam/problems/type/7?problemSetProblemId=994805059731177472
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
    set<string> st;
    for (int i = 0; i < n; i++)
    {
        string name;
        cin >> name;
        st.insert(name);
    }
    int m, mm;
    cin >> m;
    mm = m;
    map<string, int> mp;
    int avg_cnt = 0;
    while (m--)
    {
        string name;
        int cnt;
        cin >> name >> cnt;
        mp[name] = cnt;
        avg_cnt += cnt;
    }
    avg_cnt /= mm;
    vector<pair<string, int>> ans;
    for (auto& [name, cnt] : mp)
    {
        if (cnt > avg_cnt && !st.count(name))
        {
            ans.push_back({name, cnt});
        }
    }
    sort(ans.begin(), ans.end());
    if (ans.size() == 0)
    {
        cout << "Bing Mei You" << endl;
    }
    for (auto& [name, cnt] : ans)
    {
        cout << name << endl;
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