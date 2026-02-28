/*
  @pintia psid=994805046380707840 pid=1781658570803388423 compiler=GXX
  ProblemSet: 团体程序设计天梯赛-练习集
  Title: 九宫格
  https://pintia.cn/problem-sets/994805046380707840/exam/problems/type/7?problemSetProblemId=1781658570803388423
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
    while (n--)
    {
        vector<vector<int>> v(9, vector<int>(9));
        bool f = 0;
        for (int i = 0; i < 9; i++)
        {
            for (int j = 0; j < 9; j++)
            {
                cin >> v[i][j];
                if (v[i][j] < 1 || v[i][j] > 9)
                {
                    f = 1;
                }
            }
        }
        for (int i = 0; i < 9; i++)
        {
            set<int> st;
            for (int j = 0; j < 9; j++)
            {
                st.insert(v[i][j]);
            }
            if (st.size() != 9)
            {
                f = 1;
                break;
            }
        }
        for (int i = 0; i < 9; i++)
        {
            set<int> st;
            for (int j = 0; j < 9; j++)
            {
                st.insert(v[j][i]);
            }
            if (st.size() != 9)
            {
                f = 1;
                break;
            }
        }
        for (int r = 0; r < 3; r++)
        {
            for (int c = 0; c < 3; c++)
            {
                set<int> st;
                for (int i = 0; i < 3; i++)
                {
                    for (int j = 0; j < 3; j++)
                    {
                        st.insert(v[3 * r + i][3 * c + j]);
                    }
                }
                if (st.size() != 9)
                {
                    f = 1;
                    break;
                }
            }
        }
        if (f == 0)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 0 << endl;
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