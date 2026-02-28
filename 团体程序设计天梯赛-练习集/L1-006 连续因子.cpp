/*
  @pintia psid=994805046380707840 pid=994805138600869888 compiler=GXX
  ProblemSet: 团体程序设计天梯赛-练习集
  Title: 连续因子
  https://pintia.cn/problem-sets/994805046380707840/exam/problems/type/7?problemSetProblemId=994805138600869888
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
    int ans = 0, st = n;
    for (int i = 14; i >= 1; i--)
    {
        for (ll j = 2; j * j <= n; j++)
        {
            ll p = 1;
            bool f = 0;
            for (int k = j; k < j + i; k++)
            {
                p *= k;
                if (p > n)
                {
                    f = 1;
                    break;
                }
            }
            if (f == 1)
            {
                break;
            }
            if (n % p == 0)
            {
                ans = i;
                st = j;
                break;
            }
        }
        if (ans > 0)
        {
            break;
        }
    }
    if (ans == 0)
    {
        ans = 1;
        st = n;
        cout << ans << endl
             << st << endl;
        return;
    }
    cout << ans << endl;
    for (int i = 0; i < ans; i++)
    {
        cout << st + i;
        if (i < ans - 1)
        {
            cout << "*";
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