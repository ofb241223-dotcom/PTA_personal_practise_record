/*
  @pintia psid=994805046380707840 pid=994805117167976448 compiler=GXX
  ProblemSet: 团体程序设计天梯赛-练习集
  Title: 帅到没朋友
  https://pintia.cn/problem-sets/994805046380707840/exam/problems/type/7?problemSetProblemId=994805117167976448
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
    set<int> st1, st2;
    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        if (k > 1)
        {
            for (int j = 0; j < k; j++)
            {
                int num;
                cin >> num;
                st1.insert(num);
            }
        }
        else
        {
            int x;
            cin >> x;
        }
    }
    int m;
    cin >> m;
    vector<int> ans;
    while (m--)
    {
        int num;
        cin >> num;
        if (!st1.count(num) && !st2.count(num))
        {
            ans.push_back(num);
            st2.insert(num);
        }
    }
    if (ans.size() == 0)
    {
        printf("No one is handsome");
    }
    for (int i = 0; i < ans.size(); i++)
    {
        if (i != 0)
            printf(" ");
        printf("%05d", ans[i]);
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