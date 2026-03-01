/*
  @pintia psid=994805046380707840 pid=994805072641245184 compiler=GXX
  ProblemSet: 团体程序设计天梯赛-练习集
  Title: 链表去重
  https://pintia.cn/problem-sets/994805046380707840/exam/problems/type/7?problemSetProblemId=994805072641245184
*/
// @pintia code=start
#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
const int M = 200005;
typedef long long ll;
typedef unsigned long long ull;
const ll mod = 1000000007;
struct node
{
    int key, next;
};
vector<node> v(100005);
void solve()
{
    int st, n;
    cin >> st >> n;
    for (int i = 0; i < n; i++)
    {
        int ad, key, next;
        cin >> ad >> key >> next;
        v[ad] = {key, next};
    }
    vector<node> a(100005), b(100005);
    int cur = st;
    set<int> s;
    int cur1, cur2, f1 = 1, f2 = 1;
    int st1, st2;
    while (cur != -1)
    {
        if (s.count(abs(v[cur].key)))
        {
            if (f2 == 1)
            {
                cur2 = cur;
                b[cur2].key = v[cur].key;
                st2 = cur;
                f2 = 0;
            }
            else
            {
                b[cur2].next = cur;
                cur2 = cur;
                b[cur2].key = v[cur].key;
            }
            cur = v[cur].next;
            continue;
        }
        s.insert(abs(v[cur].key));
        if (f1 == 1)
        {
            st1 = cur;
            cur1 = cur;
            a[cur1].key = v[cur].key;
            f1 = 0;
        }
        else
        {
            a[cur1].next = cur;
            cur1 = cur;
            a[cur1].key = v[cur].key;
        }
        cur = v[cur].next;
    }
    a[cur1].next = -1;
    b[cur2].next = -1;
    while (st1 != -1)
    {
        printf("%05d %d ", st1, a[st1].key);
        if (a[st1].next == -1)
        {
            printf("%d\n", a[st1].next);
        }
        else
        {
            printf("%05d\n", a[st1].next);
        }
        st1 = a[st1].next;
    }
    if (f2 == 0)
    {
        while (st2 != -1)
        {
            printf("%05d %d ", st2, b[st2].key);
            if (b[st2].next == -1)
            {
                printf("%d\n", b[st2].next);
            }
            else
            {
                printf("%05d\n", b[st2].next);
            }
            st2 = b[st2].next;
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