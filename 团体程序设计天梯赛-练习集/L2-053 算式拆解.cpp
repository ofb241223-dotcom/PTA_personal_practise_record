/*
  @pintia psid=994805046380707840 pid=1913922872972247048 compiler=GXX
  ProblemSet: 团体程序设计天梯赛-练习集
  Title: 算式拆解
  https://pintia.cn/problem-sets/994805046380707840/exam/problems/type/7?problemSetProblemId=1913922872972247048
*/
// @pintia code=start
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long ll;

void solve()
{
    string s;
    cin >> s;
    stack<string> sk;
    int len = s.size();
    for(int i = 0; i < len; i++)
    {
        if(s[i] == '(' || s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/')
        {
            sk.push(string(1, s[i]));
        }
        else if(isdigit(s[i]))
        {
            string num = "";
            while(i < len && isdigit(s[i]))
            {
                num += s[i];
                i++;
            }
            i--;
            sk.push(num);
        }
        else
        {
            string n1 = sk.top();
            sk.pop();
            string op = sk.top();
            sk.pop();
            string n2 = sk.top();
            sk.pop();
            sk.pop();
            cout << n2 << op << n1 << endl;
            sk.push("");
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
    {
        solve();
    }
    return 0;
}
// @pintia code=end