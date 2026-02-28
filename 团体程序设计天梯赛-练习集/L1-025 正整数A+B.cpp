/*
  @pintia psid=994805046380707840 pid=994805110318678016 compiler=GXX
  ProblemSet: 团体程序设计天梯赛-练习集
  Title: 正整数A+B
  https://pintia.cn/problem-sets/994805046380707840/exam/problems/type/7?problemSetProblemId=994805110318678016
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
    string s;
    getline(cin, s);
    size_t pos = s.find(' ');
    int n1 = 0, n2 = 0;
    string s1 = s.substr(0, pos);
    string s2 = s.substr(pos + 1);
    bool f1 = 0, f2 = 0;
    if (s1.size() == 0)
    {
        f1 = 1;
    }
    for (auto x : s1)
    {
        if (!isdigit(x))
        {
            f1 = 1;
            break;
        }
    }
    for (auto x : s2)
    {
        if (!isdigit(x))
        {
            f2 = 1;
            break;
        }
    }
    if (f1 && f2)
    {
        cout << "? + ? = ?";
    }
    else if (f1)
    {
        for (auto x : s2)
        {
            n2 = n2 * 10 + (x - '0');
        }
        if (n2 >= 1 && n2 <= 1000)
            cout << "? + " << n2 << " = ?";
        else
            cout << "? + ? = ?";
    }
    else if (f2)
    {
        for (auto x : s1)
        {
            n1 = n1 * 10 + (x - '0');
        }
        if (n1 >= 1 && n1 <= 1000)
            cout << n1 << " + ?" << " = ?";
        else
            cout << "? + ? = ?";
    }
    else
    {
        for (auto x : s1)
        {
            n1 = n1 * 10 + (x - '0');
        }
        for (auto x : s2)
        {
            n2 = n2 * 10 + (x - '0');
        }
        if (n1 >= 1 && n1 <= 1000 && n2 >= 1 && n2 <= 1000)
            cout << n1 << " + " << n2 << " = " << n1 + n2;
        else if (n1 >= 1 && n1 <= 1000)
            cout << n1 << " + ?" << " = ?";
        else if (n2 >= 1 && n2 <= 1000)
            cout << "? + " << n2 << " = ?";
        else
            cout << "? + ? = ?";
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