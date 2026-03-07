/*
  @pintia psid=994805046380707840 pid=1518582383141380096 compiler=GXX
  ProblemSet: 团体程序设计天梯赛-练习集
  Title: 老板的作息表
  https://pintia.cn/problem-sets/994805046380707840/exam/problems/type/7?problemSetProblemId=1518582383141380096
*/
// @pintia code=start
#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
const int M = 200005;
typedef long long ll;
typedef unsigned long long ull;
const ll mod = 1000000007;
bool cmp(const pair<tuple<int, int, int>, tuple<int, int, int>>& a, const pair<tuple<int, int, int>, tuple<int, int, int>>& b)
{
    return a.first < b.first;
}
void print(tuple<int, int, int> time)
{
    auto [hh, mm, ss] = time;
    printf("%02d:%02d:%02d", hh, mm, ss);
}
void solve()
{
    int n;
    cin >> n;
    vector<pair<tuple<int, int, int>, tuple<int, int, int>>> v;
    for (int i = 0; i < n; i++)
    {
        int hh1, mm1, ss1, hh2, mm2, ss2;
        char ch;
        cin >> hh1 >> ch >> mm1 >> ch >> ss1 >> ch >> hh2 >> ch >> mm2 >> ch >> ss2;
        v.push_back({{hh1, mm1, ss1}, {hh2, mm2, ss2}});
    }
    sort(v.begin(), v.end(), cmp);
    tuple<int, int, int> cur = {0, 0, 0};
    for (auto &[x, y] : v)
    {
        if (x > cur)
        {
            print(cur);
            cout << " - ";
            print(x);
            cout << endl;
        }
        cur = y;
    }
    tuple<int, int, int> end = {23, 59, 59};
    if (cur < end)
    {
        print(cur);
        cout << " - ";
        print(end);
        cout << endl;
    }
}
int main()
{
    int t = 1;
    // cin >> t;
    while (t--)
        solve();
    return 0;
}
// @pintia code=end