/*
  @pintia psid=994805046380707840 pid=1111914599412858885 compiler=GXX
  ProblemSet: 团体程序设计天梯赛-练习集
  Title: 估值一亿的AI核心代码
  https://pintia.cn/problem-sets/994805046380707840/exam/problems/type/7?problemSetProblemId=1111914599412858885
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
        cout << s << endl;
        cout << "AI: ";
        for (int j = 0; j < s.size(); j++)
        {
            if (s[j] != 'I' && isalpha(s[j]))
            {
                s[j] = tolower(s[j]);
            }
            else if (s[j] == '?')
            {
                s[j] = '!';
            }
        }
        bool pre = 0;
        string s1 = "";
        for (int j = 0; j < s.size(); j++)
        {
            if (s[j] == ' ')
            {
                if (pre == 0)
                {
                    pre = 1;
                    s1 += ' ';
                }
            }
            else
            {
                pre = 0;
                s1 += s[j];
            }
        }
        if (!s1.empty() && s1.back() == ' ')
        {
            s1.pop_back();
        }
        if (!s1.empty() && s1.front() == ' ')
        {
            s1.erase(0, 1);
        }
        string s2 = "";
        for (int j = 0; j < s1.size(); j++)
        {
            if (s1[j] == ' ' && j + 1 < s1.size() && !isalnum(s1[j + 1]))
            {
                continue;
            }
            s2 += s1[j];
        }
        string cur_token = "";
        string cur_sep = "";
        vector<string> token;
        vector<string> sep;
        for (int j = 0; j < s2.size(); j++)
        {
            if (isalpha(s2[j]))
            {
                cur_token += s2[j];
            }
            else
            {
                if (!cur_token.empty())
                {
                    token.push_back(cur_token);
                    sep.push_back(cur_sep);
                    cur_token = "";
                    cur_sep = "";
                }
                cur_sep += s2[j];
            }
        }
        if (!cur_token.empty())
        {
            token.push_back(cur_token);
            sep.push_back(cur_sep);
            cur_sep = "";
        }
        string tail = cur_sep;
        for (int j = 0; j < token.size(); j++)
        {
            if (j + 1 < token.size() && (token[j] == "can" || token[j] == "could") && token[j + 1] == "you" && sep[j + 1] == " ")
            {
                token[j + 1] = token[j];
                token[j] = "I";
                j++;
            }
            else if (token[j] == "I" || token[j] == "me")
            {
                token[j] = "you";
            }
        }
        for (int j = 0; j < token.size(); j++)
        {
            cout << sep[j] + token[j];
        }
        cout << tail << endl;
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