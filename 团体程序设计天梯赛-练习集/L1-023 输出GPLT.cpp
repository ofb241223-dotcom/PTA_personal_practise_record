/*
  @pintia psid=994805046380707840 pid=994805113036587008 compiler=GXX
  ProblemSet: 团体程序设计天梯赛-练习集
  Title: 输出GPLT
  https://pintia.cn/problem-sets/994805046380707840/exam/problems/type/7?problemSetProblemId=994805113036587008
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
    vector<int> v(4);
    string t;
    cin >> t;
    for (auto x : t)
    {
        if ((char)toupper(x) == 'G' || (char)toupper(x) == 'P' || (char)toupper(x) == 'L' || (char)toupper(x) == 'T')
        {
            if (toupper(x) == 'G')
            {
                v[0]++;
            }
            else if (toupper(x) == 'P')
            {
                v[1]++;
            }
            else if (toupper(x) == 'L')
            {
                v[2]++;
            }
            else
            {
                v[3]++;
            }
        }
    }
    while (v[0] > 0 || v[1] > 0 || v[2] > 0 || v[3] > 0)
    {
        if (v[0] > 0)
        {
            cout << 'G';
            v[0]--;
        }
        if (v[1] > 0)
        {
            cout << 'P';
            v[1]--;
        }
        if (v[2] > 0)
        {
            cout << 'L';
            v[2]--;
        }
        if (v[3] > 0)
        {
            cout << 'T';
            v[3]--;
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