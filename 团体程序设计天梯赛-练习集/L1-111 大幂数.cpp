/*
  @pintia psid=994805046380707840 pid=1913922872972247046 compiler=GXX
  ProblemSet: 团体程序设计天梯赛-练习集
  Title: 大幂数
  https://pintia.cn/problem-sets/994805046380707840/exam/problems/type/7?problemSetProblemId=1913922872972247046
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
    ll n;
    cin >> n;
    vector<pair<int, vector<int>>> ans;
    for (int i = 1; i < 31; i++)
    {
        ll t = 0;
        for (ll j = 1;; j++)
        {
            t += pow(j, i);
            if (t == n)
            {
                vector<int> temp;
                for (int k = 1; k <= j; k++)
                {
                    temp.push_back(k);
                }
                ans.push_back({i, temp});
                break;
            }
            if (t > n)
            {
                break;
            }
        }
    }
    if (ans.size() == 0)
    {
        cout << "Impossible for " << n << ".";
    }
    else
    {
        auto& [x, y] = ans.back();
        for (int i = 0; i < y.size(); i++)
        {
            cout << y[i] << "^" << x;
            if (i < y.size() - 1)
            {
                cout << "+";
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