/*
  @pintia psid=994805046380707840 pid=1111914599412858880 compiler=GXX
  ProblemSet: 团体程序设计天梯赛-练习集
  Title: 敲笨钟
  https://pintia.cn/problem-sets/994805046380707840/exam/problems/type/7?problemSetProblemId=1111914599412858880
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
    cin.ignore();
    for (int i = 0; i < n; i++)
    {
        string s;
        getline(cin, s);
        int len = s.size();
        size_t it = s.find(',');
        vector<string> v;
        vector<int> pos;
        pos.push_back(0);
        for (int j = 0; j < len; j++)
        {
            if (s[j] == ' ')
            {
                pos.push_back(j + 1);
            }
        }
        for (int j = 0; j < pos.size() - 1; j++)
        {
            v.push_back(s.substr(pos[j], pos[j + 1] - pos[j] - 1));
        }
        v.push_back(s.substr(pos.back(), len - pos.back()));
        // for(auto x : v)
        // {
        //     cout << x << " ";
        // }
        // cout << endl;
        if (s[it - 1] == 'g' && s[it - 2] == 'n' && s[it - 3] == 'o' && s[len - 2] == 'g' && s[len - 3] == 'n' && s[len - 4] == 'o')
        {
            int l = v.size();
            v[l - 1] = "zhong.", v[l - 2] = "ben", v[l - 3] = "qiao";
            for (int j = 0; j < l; j++)
            {
                if (j > 0)
                {
                    cout << " ";
                }
                cout << v[j];
            }

            cout << endl;
        }
        else
        {
            cout << "Skipped" << endl;
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