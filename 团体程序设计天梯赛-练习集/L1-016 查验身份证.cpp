/*
  @pintia psid=994805046380707840 pid=994805122985476096 compiler=GXX
  ProblemSet: 团体程序设计天梯赛-练习集
  Title: 查验身份证
  https://pintia.cn/problem-sets/994805046380707840/exam/problems/type/7?problemSetProblemId=994805122985476096
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
    map<int, char> mp;
    mp[0] = '1', mp[1] = '0', mp[2] = 'X',
    mp[3] = '9', mp[4] = '8', mp[5] = '7',
    mp[6] = '6', mp[7] = '5', mp[8] = '4',
    mp[9] = '3', mp[10] = '2';
    vector<int> v(17);
    v[0] = 7, v[1] = 9, v[2] = 10, v[3] = 5,
    v[4] = 8, v[5] = 4, v[6] = 2, v[7] = 1,
    v[8] = 6, v[9] = 3, v[10] = 7, v[11] = 9,
    v[12] = 10, v[13] = 5, v[14] = 8, v[15] = 4,
    v[16] = 2;
    int n;
    cin >> n;
    cin.ignore();
    int cnt = 0, t = n;
    while (n--)
    {
        bool f = 0;
        string s;
        getline(cin, s);
        for (int i = 0; i < s.size() - 1; i++)
        {
            if (!isdigit(s[i]))
            {
                f = 1;
                break;
            }
        }
        if (f == 1)
        {
            cout << s << endl;
        }
        else
        {
            int x = 0;
            for (int i = 0; i < 17; i++)
            {
                x = (x + (s[i] - '0') * v[i]) % 11;
            }
            if (s[17] == mp[x])
            {
                cnt++;
            }
            else
            {
                cout << s << endl;
            }
        }
    }
    if (cnt == t)
    {
        cout << "All passed";
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