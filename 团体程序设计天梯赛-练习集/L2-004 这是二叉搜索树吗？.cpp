/*
  @pintia psid=994805046380707840 pid=994805070971912192 compiler=GXX
  ProblemSet: 团体程序设计天梯赛-练习集
  Title: 这是二叉搜索树吗？
  https://pintia.cn/problem-sets/994805046380707840/exam/problems/type/7?problemSetProblemId=994805070971912192
*/
// @pintia code=start
#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
const int M = 200005;
typedef long long ll;
typedef unsigned long long ull;
const ll mod = 1000000007;
int n;
vector<int> v, post;
bool f = 1;
void check(int l, int r, bool mirror)
{
    if (l > r)
    {
        return;
    }
    int mid = l + 1;
    if (mirror == 0)
    {
        while (mid <= r && v[mid] < v[l])
        {
            mid++;
        }
    }
    else
    {
        while (mid <= r && v[mid] >= v[l])
        {
            mid++;
        }
    }
    for (int i = mid; i <= r; i++)
    {
        if (mirror && v[i] >= v[l])
        {
            f = 0;
            return;
        }
        if (!mirror && v[i] < v[l])
        {
            f = 0;
            return;
        }
    }
    check(l + 1, mid - 1, mirror);
    check(mid, r, mirror);
    post.push_back(v[l]);
}
void solve()
{
    cin >> n;
    v.resize(n);
    for (auto &x : v)
    {
        cin >> x;
    }
    check(0, n - 1, 0);
    if (f == 1)
    {
        cout << "YES" << endl;
        for (int i = 0; i < post.size(); i++)
        {
            if (i > 0)
            {
                cout << " ";
            }
            cout << post[i];
        }
        return;
    }
    f = 1;
    post.clear();
    check(0, n - 1, 1);
    if (f == 1)
    {
        cout << "YES" << endl;
        for (int i = 0; i < post.size(); i++)
        {
            if (i > 0)
            {
                cout << " ";
            }
            cout << post[i];
        }
        return;
    }
    cout << "NO";
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