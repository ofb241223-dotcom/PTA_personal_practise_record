/*
  @pintia psid=994805046380707840 pid=1913922872972247045 compiler=GXX
  ProblemSet: 团体程序设计天梯赛-练习集
  Title: 这不是字符串题
  https://pintia.cn/problem-sets/994805046380707840/exam/problems/type/7?problemSetProblemId=1913922872972247045
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
    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    for (auto& x : v)
    {
        cin >> x;
    }
    while (m--)
    {
        int op;
        cin >> op;
        if (op == 1)
        {
            int len1, len2;
            cin >> len1;
            vector<int> v1(len1);
            for (auto& x : v1)
            {
                cin >> x;
            }
            cin >> len2;
            vector<int> v2(len2);
            for (auto& x : v2)
            {
                cin >> x;
            }
            auto it = search(v.begin(), v.end(), v1.begin(), v1.end());
            if (it != v.end())
            {
                int idx = it - v.begin();
                v.insert(v.begin() + idx + len1, v2.begin(), v2.end());
                v.erase(v.begin() + idx, v.begin() + idx + len1);
            }
        }
        else if (op == 2)
        {
            for (int i = 0; i < v.size() - 1; i++)
            {
                if ((v[i] + v[i + 1]) % 2 == 0)
                {
                    v.insert(v.begin() + i + 1, (v[i] + v[i + 1]) / 2);
                    i++;
                }
            }
        }
        else if (op == 3)
        {
            int l, r;
            cin >> l >> r;
            l--, r--;
            reverse(v.begin() + l, v.begin() + r + 1);
        }
    }
    for (int i = 0; i < v.size(); i++)
    {
        if (i > 0)
        {
            cout << " ";
        }
        cout << v[i];
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