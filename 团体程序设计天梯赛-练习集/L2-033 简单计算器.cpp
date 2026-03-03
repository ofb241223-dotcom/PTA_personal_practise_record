<<<<<<< HEAD
/*
  @pintia psid=994805046380707840 pid=1336215880692482056 compiler=GXX
  ProblemSet: 团体程序设计天梯赛-练习集
  Title: 简单计算器
  https://pintia.cn/problem-sets/994805046380707840/exam/problems/type/7?problemSetProblemId=1336215880692482056
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
    stack<int> s1;
    stack<char> s2;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s1.push(x);
    }
    for (int i = 0; i < n - 1; i++)
    {
        char x;
        cin>> x;
        s2.push(x);
    }
    while (!s2.empty())
    {
        char op = s2.top();
        s2.pop();
        int n1 = s1.top();
        s1.pop();
        int n2 = s1.top();
        s1.pop();
        if (op == '+')
        {
            int num = n2 + n1;
            s1.push(num);
        }
        else if (op == '-')
        {
            int num = n2 - n1;
            s1.push(num);
        }
        else if (op == '*')
        {
            int num = n2 * n1;
            s1.push(num);
        }
        else if (op == '/')
        {
            if (n1 == 0)
            {
                cout << "ERROR: " << n2 << "/" << n1;
                return;
            }
            s1.push(n2 / n1);
        }
    }
    cout << s1.top();
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
=======
/*
  @pintia psid=994805046380707840 pid=1336215880692482056 compiler=GXX
  ProblemSet: 团体程序设计天梯赛-练习集
  Title: 简单计算器
  https://pintia.cn/problem-sets/994805046380707840/exam/problems/type/7?problemSetProblemId=1336215880692482056
*/
// @pintia code:start
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
    stack<int> s1;
    stack<char> s2;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s1.push(x);
    }
    for (int i = 0; i < n - 1; i++)
    {
        char x;
        cin>> x;
        s2.push(x);
    }
    while (!s2.empty())
    {
        char op = s2.top();
        s2.pop();
        int n1 = s1.top();
        s1.pop();
        int n2 = s1.top();
        s1.pop();
        if (op == '+')
        {
            int num = n2 + n1;
            s1.push(num);
        }
        else if (op == '-')
        {
            int num = n2 - n1;
            s1.push(num);
        }
        else if (op == '*')
        {
            int num = n2 * n1;
            s1.push(num);
        }
        else if (op == '/')
        {
            if (n1 == 0)
            {
                cout << "ERROR: " << n2 << "/" << n1;
                return;
            }
            s1.push(n2 / n1);
        }
    }
    cout << s1.top();
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
// @pintia code:end
>>>>>>> 0966a68003dc34e316a9b48207c2267735a88e11
