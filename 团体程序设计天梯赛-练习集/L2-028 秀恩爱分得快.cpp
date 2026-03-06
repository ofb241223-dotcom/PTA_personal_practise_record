/*
  @pintia psid=994805046380707840 pid=994805054698012672 compiler=GXX
  ProblemSet: 团体程序设计天梯赛-练习集
  Title: 秀恩爱分得快
  https://pintia.cn/problem-sets/994805046380707840/exam/problems/type/7?problemSetProblemId=994805054698012672
*/
// @pintia code=start
#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
const int M = 200005;
typedef long long ll;
typedef unsigned long long ull;
const ll mod = 1000000007;
vector<vector<int>> v;
map<int, int> sex;
map<int, double> f(int x)
{
    map<int, double> vec;
    for (auto &p : v)
    {
        if (find(p.begin(), p.end(), x) != p.end())
        {
            for (auto &q : p)
            {
                if (q != x && sex[q] != sex[x])
                {
                    vec[q] += 1.0 / p.size();
                }
            }
        }
    }
    return vec;
}
void print(int x)
{
    if (x == 0 && sex[x] == 0)
    {
        cout << "-" << x;
    }
    else
    {
        cout << x;
    }
}
bool cmp(const int& a, const int& b)
{
    return abs(a) < abs(b);
}
void solve()
{
    int n, m;
    cin >> n>> m;
    v.resize(m);
    for (int i = 0; i < m; i++)
    {
        int k;
        cin >> k;
        for (int j = 0; j < k; j++)
        {
            string x;
            cin >> x;
            if (x.front() == '-')
            {
                sex[stoi(x)] = 0;
            }
            else
            {
                sex[stoi(x)] = 1;
            }
            v[i].push_back(stoi(x));
        }
    }
    string sa, sb;
    cin >> sa >> sb;
    int a = stoi(sa), b = stoi(sb);
    sex[a] = (sa.front() != '-') ? 1 : 0;
    sex[b] = (sb.front() != '-') ? 1 : 0;
    map<int, double> ma = f(a);
    map<int, double> mb = f(b);
    double mxa = 0, mxb = 0;
    double ab = 0, ba = 0;
    for (auto &[x, y] : ma)
    {
        if (x == b)
        {
            ab = y;
        }
        mxa = max(mxa, y);
    }
    for (auto& [x, y] : mb)
    {
        if (x == a)
        {
            ba = y;
        }
        mxb = max(mxb, y);
    }
    if (mxa == ab && mxb == ba)
    {
        print(a);
        cout << " ";
        print(b);
        cout << endl;
    }
    else
    {
        vector<int> aa, bb;
        for (auto &[x, y] : ma)
        {
            if (y == mxa)
            {
                aa.push_back(x);
            }
        }
        for (auto &[x, y] : mb)
        {
            if (y == mxb)
            {
                bb.push_back(x);
            }
        }
        sort(aa.begin(), aa.end(), cmp);
        sort(bb.begin(), bb.end(), cmp);
        for (auto &x : aa)
        {
            print(a);
            cout << " ";
            print(x);
            cout << endl;
        }
        for (auto& x : bb)
        {
            print(b);
            cout << " ";
            print(x);
            cout << endl;
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