/*
  @pintia psid=994805046380707840 pid=994805107638517760 compiler=GXX
  ProblemSet: 团体程序设计天梯赛-练习集
  Title: 出租
  https://pintia.cn/problem-sets/994805046380707840/exam/problems/type/7?problemSetProblemId=994805107638517760
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
    string s;
    cin >> s;
    vector<int> v;
    set<int, greater<int>> st;
    for (auto x : s)
    {
        st.insert(x - '0');
    }
    cout << "int[] arr = new int[]{";
    for (auto it = st.begin(); it != st.end(); ++it)
    {
        if (it != st.begin())
        {
            cout << ",";
        }
        cout << *it;
    }
    cout << "};" << endl;
    cout << "int[] index = new int[]{";
    for (auto x : s)
    {
        int t = x - '0';
        auto it = st.find(t);
        v.push_back(distance(st.begin(), it));
    }
    for (auto it = v.begin(); it != v.end(); ++it)
    {
        if (it != v.begin())
        {
            cout << ",";
        }
        cout << *it;
    }
    cout << "};" << endl;
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