/*
  @pintia psid=994805046380707840 pid=994805076512587776 compiler=GXX
  ProblemSet: 团体程序设计天梯赛-练习集
  Title: 福到了
  https://pintia.cn/problem-sets/994805046380707840/exam/problems/type/7?problemSetProblemId=994805076512587776
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
    char ch;
    int n;
    cin >> ch >> n;
    cin.ignore();
    vector<string> s(n);
    for (int i = 0; i < n; i++)
    {
        string x;
        getline(cin, x);
        while (x.size() < n)
        {
            x += ' ';
        }
        s[i] = x;
    }
    vector<string> temp = s;
    reverse(s.begin(), s.end());
    for (int i = 0; i < n; i++)
    {
        reverse(s[i].begin(), s[i].end());
    }
    if (temp == s)
    {
        cout << "bu yong dao le" << endl;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (s[i][j] == '@')
            {
                cout << ch;
            }
            else
            {
                cout << s[i][j];
            }
        }
        cout << endl;
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