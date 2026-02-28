/*
  @pintia psid=994805046380707840 pid=1781658570803388420 compiler=GXX
  ProblemSet: 团体程序设计天梯赛-练习集
  Title: 别再来这么多猫娘了！
  https://pintia.cn/problem-sets/994805046380707840/exam/problems/type/7?problemSetProblemId=1781658570803388420
*/
// @pintia code=start
#include <bits/stdc++.h>
using namespace std;
struct node
{
    size_t pos;
    size_t len;
};
bool cmp(const node& a, const node& b)
{
    return a.pos < b.pos;
}
int main()
{
    int n;
    cin >> n;
    vector<string> v(n);
    for (auto& x : v)
    {
        cin >> x;
    }
    int k;
    cin >> k;
    string t;
    cin.ignore();
    getline(cin, t);
    int cnt = 0;
    string tt = t;
    vector<node> nodes;
    for (auto& x : v)
    {
        for (size_t it = tt.find(x); it != string::npos; it = tt.find(x, it + x.size()))
        {
            cnt++;
            nodes.push_back({it, x.size()});
            tt.replace(it, x.size(), string(x.size(), '\n'));
        }
    }
    if (cnt >= k)
    {
        cout << cnt << endl
             << "He Xie Ni Quan Jia!";
    }
    else
    {
        sort(nodes.begin(), nodes.end(), cmp);
        string ans = "";
        int last = 0;
        for (auto& x : nodes)
        {
            ans += t.substr(last, x.pos - last);
            ans += "<censored>";
            last = x.pos + x.len;
        }
        ans += t.substr(last);
        cout << ans;
    }
    return 0;
}

// @pintia code=end