/*
  @pintia psid=994805046380707840 pid=994805087447138304 compiler=GXX
  ProblemSet: 团体程序设计天梯赛-练习集
  Title: 阅览室
  https://pintia.cn/problem-sets/994805046380707840/exam/problems/type/7?problemSetProblemId=994805087447138304
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
    int cnt = 0;
    int avg_cnt = 0, sum = 0;
    map<int, pair<int, int>> mp;
    while (cnt < n)
    {
        int id, hh, mm;
        char ch, x;
        cin >> id >> ch >> hh >> x >> mm;
        if (id == 0)
        {
            if (avg_cnt == 0)
                cout << "0 0" << endl;
            else
                cout << avg_cnt << " " << (int)round((double)sum / avg_cnt) << endl;
            avg_cnt = 0, sum = 0;
            mp.clear();
            cnt++;
            continue;
        }
        if (ch == 'S')
        {
            mp[id] = {hh, mm};
        }
        else
        {
            if (mp.find(id) != mp.end())
            {
                avg_cnt++;
                sum += hh * 60 + mm - mp[id].first * 60 - mp[id].second;
                mp.erase(id);
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