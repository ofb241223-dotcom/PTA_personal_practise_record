/*
  @pintia psid=994805046380707840 pid=994805133597065216 compiler=GXX
  ProblemSet: 团体程序设计天梯赛-练习集
  Title: N个数求和
  https://pintia.cn/problem-sets/994805046380707840/exam/problems/type/7?problemSetProblemId=994805133597065216
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
    ll p = 0, q = 1;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        int idx = s.find('/');
        ll a = stoll(s.substr(0, idx));
        ll b = stoll(s.substr(idx + 1));
        // cout << a << " " << b << endl;
        p = p * b + a * q;
        q = q * b;
        ll x = __gcd(abs(p), abs(q));
        p /= x;
        q /= x;
    }
    if (q < 0)
    {
        q = -q;
        p = -p;
    }
    ll x = p / q;
    ll y = p % q;
    if (x == 0 && y == 0)
    {
        cout << 0;
    }
    else if (x == 0)
    {
        cout << y << "/" << q;
    }
    else if (y == 0)
    {
        cout << x;
    }
    else
    {
        cout << x << " " << y << "/" << q;
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