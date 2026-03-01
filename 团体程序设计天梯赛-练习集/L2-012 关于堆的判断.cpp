/*
  @pintia psid=994805046380707840 pid=994805064676261888 compiler=GXX
  ProblemSet: 团体程序设计天梯赛-练习集
  Title: 关于堆的判断
  https://pintia.cn/problem-sets/994805046380707840/exam/problems/type/7?problemSetProblemId=994805064676261888
*/
// @pintia code=start
#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
const int M = 200005;
typedef long long ll;
typedef unsigned long long ull;
const ll mod = 1000000007;

int parse_num(const string& s, int& i)
{
    int num = 0;
    bool neg = false;
    if (i < (int)s.size() && s[i] == '-')
    {
        neg = true;
        i++;
    }
    while (i < (int)s.size() && s[i] != ' ')
    {
        num = num * 10 + (s[i] - '0');
        i++;
    }
    return neg ? -num : num;
}

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> h(1005);
    int sz = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        h[++sz] = x;
        int idx = sz;
        while (idx > 1 && h[idx] < h[idx / 2])
        {
            swap(h[idx], h[idx / 2]);
            idx /= 2;
        }
    }
    unordered_map<int, int> pos;
    for (int i = 1; i <= sz; i++)
    {
        pos[h[i]] = i;
    }
    cin.ignore();
    while (m--)
    {
        string s;
        getline(cin, s);
        if (s.find("root") != string::npos)
        {
            int i = 0;
            int num = parse_num(s, i);
            if (pos[num] == 1)
                cout << "T" << endl;
            else
                cout << "F" << endl;
        }
        else if (s.find("siblings") != string::npos)
        {
            int i = 0;
            int num1 = parse_num(s, i);
            i = s.find("and ") + 4;
            int num2 = parse_num(s, i);
            if (pos[num1] / 2 == pos[num2] / 2)
                cout << "T" << endl;
            else
                cout << "F" << endl;
        }
        else if (s.find("parent") != string::npos)
        {
            int i = 0;
            int num1 = parse_num(s, i);
            i = s.find("of ") + 3;
            int num2 = parse_num(s, i);
            if (pos[num1] == pos[num2] / 2)
                cout << "T" << endl;
            else
                cout << "F" << endl;
        }
        else if (s.find("child") != string::npos)
        {
            int i = 0;
            int num1 = parse_num(s, i);
            i = s.find("of ") + 3;
            int num2 = parse_num(s, i);
            if (pos[num1] / 2 == pos[num2])
                cout << "T" << endl;
            else
                cout << "F" << endl;
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