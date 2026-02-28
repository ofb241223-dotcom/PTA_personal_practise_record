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
    string s;
    cin.ignore();
    cin >> s;
    while (m--)
    {
        int op;
        cin >> op;
        if (op == 1)
        {
            int len1, len2;
            cin >> len1;
            cin.ignore();
            string s1;
            getline(cin, s1);
            cin >> len2;
            cin.ignore();
            string s2;
            getline(cin, s2);
            auto it = s.find(s1);
            if (it != string::npos)
            {
                s.replace(it, len1, s2);
            }
        }
        else if (op == 2)
        {
            int num = 0;
            vector<int> v;
            for (auto& x : s)
            {
                if (x == ' ')
                {
                    v.push_back(num);
                    num = 0;
                }
                else
                {
                    num = num * 10 + (x - '0');
                }
            }
            for (int i = 0; i < v.size() - 1; i++)
            {
                if ((v[i] + v[i + 1]) % 2 == 0)
                {
                    v.insert(v.begin() + i + 1, (v[i] + v[i + 1]) / 2);
                }
            }
            s.clear();
            for (int i = 0; i < v.size(); i++)
            {
                if (i > 0)
                {
                    s.push_back(' ');
                }
                s += to_string(v[i]);
            }
        }
        else if (op == 3)
        {
            int l, r;
            cin >> l >> r;
            l--, r--;
            reverse(s.begin() + l, s.begin() + r);
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