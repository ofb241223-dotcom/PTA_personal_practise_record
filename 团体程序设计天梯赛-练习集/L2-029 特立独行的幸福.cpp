/*
  @pintia psid=994805046380707840 pid=1111914599412858886 compiler=GXX
  ProblemSet: 团体程序设计天梯赛-练习集
  Title: 特立独行的幸福
  https://pintia.cn/problem-sets/994805046380707840/exam/problems/type/7?problemSetProblemId=1111914599412858886
*/
// @pintia code=start
#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
const int M = 200005;
typedef long long ll;
typedef unsigned long long ull;
const ll mod = 1000000007;
bool is(int x)
{
    if (x < 2 || (x % 2 == 0 && x != 2))
    {
        return false;
    }
    for (int i = 3; i * i <= x; i++)
    {
        if (x % i == 0)
        {
            return false;
        }
    }
    return true;
}
void solve()
{
    int a, b;
    cin >> a >> b;
    vector<pair<int, int>> ans;
    vector<int> step(10005, 0);
    vector<bool> happy(10005, 0);
    vector<bool> depend(10005, 0);
    for (int i = a; i <= b; i++)
    {
        int temp = i;
        set<int> st;
        vector<int> v;
        while (temp != 1 && !st.count(temp))
        {
            v.push_back(temp);
            st.insert(temp);
            string s = to_string(temp);
            int num = 0;
            for (auto &x : s)
            {
                int t = x - '0';
                num += t * t;
            }
            temp = num;
        }
        if (temp == 1)
        {
            happy[i] = 1;
            step[i] = v.size();
            for (auto &x : v)
            {
                if (x != i)
                {
                    depend[x] = 1;
                }
            }
        }
    }
    for (int i = a; i <= b; i++)
    {
        if (happy[i] && depend[i] == 0)
        {
            int x = step[i];
            if (is(i))
            {
                x *= 2;
            }
            ans.push_back({i, x});
        }
    }
    if (ans.size() == 0)
    {
        cout << "SAD";
        return;
    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i].first << " " << ans[i].second << endl;
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