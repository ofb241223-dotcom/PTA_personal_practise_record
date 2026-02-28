/*
  @pintia psid=994805046380707840 pid=994805103557459968 compiler=GXX
  ProblemSet: 团体程序设计天梯赛-练习集
  Title: 一帮一
  https://pintia.cn/problem-sets/994805046380707840/exam/problems/type/7?problemSetProblemId=994805103557459968
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
    deque<pair<int, string>> v1;
    deque<pair<int, string>> v2;
    for (int i = 0; i < n; i++)
    {
        int sex;
        string name;
        cin >> sex >> name;
        if (sex == 0)
        {
            v1.push_back({i, name});
        }
        else
        {
            v2.push_back({i, name});
        }
    }
    for (int i = 0; i < n / 2; i++)
    {
        if (v1.front().first < v2.front().first)
        {
            cout << v1.front().second << " " << v2.back().second << endl;
            v1.pop_front();
            v2.pop_back();
        }
        else
        {
            cout << v2.front().second << " " << v1.back().second << endl;
            v2.pop_front();
            v1.pop_back();
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