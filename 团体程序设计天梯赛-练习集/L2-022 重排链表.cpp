<<<<<<< HEAD
/*
  @pintia psid=994805046380707840 pid=994805057860517888 compiler=GXX
  ProblemSet: 团体程序设计天梯赛-练习集
  Title: 重排链表
  https://pintia.cn/problem-sets/994805046380707840/exam/problems/type/7?problemSetProblemId=994805057860517888
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
    int data, next;
};
vector<node> v(100005);
void solve()
{
    int ad, n;
    cin >> ad >> n;
    for (int i = 0; i < n; i++)
    {
        int ad, data, next;
        cin >> ad >> data >> next;
        v[ad].data = data, v[ad].next = next;
    }
    vector<int> address;
    int st = ad;
    while (st != -1)
    {
        address.push_back(st);
        // cout << st << " ";
        st = v[st].next;
    }
    int m = address.size();
    int l = 0, r = m - 1;
    int f = 0;
    while (l < r)
    {
        if (f == 0)
        {
            v[address[r]].next = address[l];
            f = 1;
            r--;
        }
        else if (f == 1)
        {
            v[address[l]].next = address[r];
            f = 0;
            l++;
        }
    }
    v[address[l]].next = -1;
    for (int i = 0; m - 1 > 2 * i; i++)
    {
        if (address[m - 1-  i] != -1)
        {
            printf("%05d ", address[m - 1 - i]);
        }
        else
        {
            printf("%d ", address[m - 1 - i]);
        }
        printf("%d ", v[address[m - 1 - i]].data);
        if (v[address[m - 1 - i]].next != -1)
        {
            printf("%05d\n", v[address[m - 1 - i]].next);
        }
        else
        {
            printf("%d\n", v[address[m - 1 - i]].next);
        }

        if (address[i] != -1)
        {
            printf("%05d ", address[i]);
        }
        else
        {
            printf("%d ", address[i]);
        }
        printf("%d ", v[address[i]].data);
        if (v[address[i]].next != -1)
        {
            printf("%05d\n", v[address[i]].next);
        }
        else
        {
            printf("%d\n", v[address[i]].next);
        }
    }
    if (m % 2 == 1)
    {
        if (address[m / 2] != -1)
        {
            printf("%05d ", address[m / 2]);
        }
        else
        {
            printf("%d ", address[m / 2]);
        }
        printf("%d ", v[address[m / 2]].data);
        if (v[address[m / 2]].next != -1)
        {
            printf("%05d", v[address[m / 2]].next);
        }
        else
        {
            printf("%d", v[address[m / 2]].next);
        }
    }
}
int main()
{
    int t = 1;
    // cin >> t;
    while (t--)
        solve();
    return 0;
}
// @pintia code=end
=======
/*
  @pintia psid=994805046380707840 pid=994805057860517888 compiler=GXX
  ProblemSet: 团体程序设计天梯赛-练习集
  Title: 重排链表
  https://pintia.cn/problem-sets/994805046380707840/exam/problems/type/7?problemSetProblemId=994805057860517888
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
    int data, next;
};
vector<node> v(100005);
void solve()
{
    int ad, n;
    cin >> ad >> n;
    for (int i = 0; i < n; i++)
    {
        int ad, data, next;
        cin >> ad >> data >> next;
        v[ad].data = data, v[ad].next = next;
    }
    vector<int> address;
    int st = ad;
    while (st != -1)
    {
        address.push_back(st);
        // cout << st << " ";
        st = v[st].next;
    }
    int m = address.size();
    int l = 0, r = m - 1;
    int f = 0;
    while (l < r)
    {
        if (f == 0)
        {
            v[address[r]].next = address[l];
            f = 1;
            r--;
        }
        else if (f == 1)
        {
            v[address[l]].next = address[r];
            f = 0;
            l++;
        }
    }
    v[address[l]].next = -1;
    for (int i = 0; m - 1 > 2 * i; i++)
    {
        if (address[m - 1-  i] != -1)
        {
            printf("%05d ", address[m - 1 - i]);
        }
        else
        {
            printf("%d ", address[m - 1 - i]);
        }
        printf("%d ", v[address[m - 1 - i]].data);
        if (v[address[m - 1 - i]].next != -1)
        {
            printf("%05d\n", v[address[m - 1 - i]].next);
        }
        else
        {
            printf("%d\n", v[address[m - 1 - i]].next);
        }

        if (address[i] != -1)
        {
            printf("%05d ", address[i]);
        }
        else
        {
            printf("%d ", address[i]);
        }
        printf("%d ", v[address[i]].data);
        if (v[address[i]].next != -1)
        {
            printf("%05d\n", v[address[i]].next);
        }
        else
        {
            printf("%d\n", v[address[i]].next);
        }
    }
    if (m % 2 == 1)
    {
        if (address[m / 2] != -1)
        {
            printf("%05d ", address[m / 2]);
        }
        else
        {
            printf("%d ", address[m / 2]);
        }
        printf("%d ", v[address[m / 2]].data);
        if (v[address[m / 2]].next != -1)
        {
            printf("%05d", v[address[m / 2]].next);
        }
        else
        {
            printf("%d", v[address[m / 2]].next);
        }
    }
}
int main()
{
    int t = 1;
    // cin >> t;
    while (t--)
        solve();
    return 0;
}
// @pintia code=end
>>>>>>> 0966a68003dc34e316a9b48207c2267735a88e11
