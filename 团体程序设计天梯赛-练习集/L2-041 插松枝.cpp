/*
  @pintia psid=994805046380707840 pid=1518582268930473984 compiler=GXX
  ProblemSet: 团体程序设计天梯赛-练习集
  Title: 插松枝
  https://pintia.cn/problem-sets/994805046380707840/exam/problems/type/7?problemSetProblemId=1518582268930473984
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
    int n, m, k;
    cin >> n >> m >> k;
    stack<int> box, tree;
    vector<int> v(n);
    vector<stack<int>> ans;
    for (auto& x : v)
    {
        cin >> x;
    }
    int i = 0;
    while (true)
    {
        if (box.empty() && i == n && tree.empty())
        {
            break;
        }
        if (box.empty())
        {
            if (i < n)
            {
                box.push(v[i]);
                i++;
            }
            else
            {
                if (!tree.empty())
                {
                    ans.push_back(tree);
                    while (!tree.empty())
                    {
                        tree.pop();
                    }
                    break;
                }
            }
        }
        if (tree.empty())
        {
            if (!box.empty())
            {
                tree.push(box.top());
                box.pop();
            }
            else
            {
                break;
            }
        }
        else
        {
            if (tree.size() == k)
            {
                ans.push_back(tree);
                while (!tree.empty())
                    tree.pop();
                continue;
            }
            if (!box.empty() && box.top() <= tree.top())
            {
                if (tree.size() < k)
                {
                    tree.push(box.top());
                    box.pop();
                }
                else
                {
                    ans.push_back(tree);
                    while (!tree.empty())
                    {
                        tree.pop();
                    }
                }
            }
            else
            {
                if (i == n)
                {
                    ans.push_back(tree);
                    while (!tree.empty())
                    {
                        tree.pop();
                    }
                }
                else if (v[i] <= tree.top())
                {
                    if (tree.size() < k)
                    {
                        tree.push(v[i]);
                        i++;
                    }
                    else
                    {
                        ans.push_back(tree);
                        while (!tree.empty())
                            tree.pop();
                    }
                }
                else
                {
                    while (i < n && v[i] > tree.top())
                    {
                        if (box.size() < m)
                        {
                            box.push(v[i]);
                        }
                        else
                        {
                            ans.push_back(tree);
                            while (!tree.empty())
                            {
                                tree.pop();
                            }
                            break;
                        }
                        i++;
                    }
                }
            }
        }
    }
    for (int i = 0; i < ans.size(); i++)
    {
        auto sk = ans[i];
        vector<int> print;
        while (!sk.empty())
        {
            print.push_back(sk.top());
            sk.pop();
        }
        for (int j = print.size() - 1; j >= 0; j--)
        {
            if (j < print.size() - 1)
            {
                cout << " ";
            }
            cout << print[j];
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