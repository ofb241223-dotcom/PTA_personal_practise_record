/*
  @pintia psid=994805046380707840 pid=1111914599412858887 compiler=GXX
  ProblemSet: 团体程序设计天梯赛-练习集
  Title: 冰岛人
  https://pintia.cn/problem-sets/994805046380707840/exam/problems/type/7?problemSetProblemId=1111914599412858887
*/
// @pintia code=start
#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
const int M = 200005;
typedef long long ll;
typedef unsigned long long ull;
const ll mod = 100000007;
int n;
map<string, int> gender;
map<string, string> fa;
bool end_with(string x, string t)
{
    int len = t.size();
    size_t pos = x.find(t);
    if (pos != string::npos && pos + len == x.size())
    {
        return true;
    }
    return false;
}
void solve()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string ming, xin;
        cin >> ming >> xin;
        if (end_with(xin, "sson"))
        {
            string xinn = xin.substr(0, xin.size() - 4);
            gender[ming] = 1;
            fa[ming] = xinn;
        }
        else if (end_with(xin, "sdottir"))
        {
            string xinn = xin.substr(0, xin.size() - 7);
            gender[ming] = 0;
            fa[ming] = xinn;
        }
        else if (xin.back() == 'm')
        {
            gender[ming] = 1;
        }
        else
        {
            gender[ming] = 0;
        }
    }
    int m;
    cin >> m;
    while (m--)
    {
        string ming1, xin1, ming2, xin2;
        cin >> ming1 >> xin1 >> ming2 >> xin2;
        if (!gender.count(ming1) || !gender.count(ming2))
        {
            cout << "NA" << endl;
        }
        else if (gender[ming1] == gender[ming2])
        {
            cout << "Whatever" << endl;
        }
        else
        {
            map<string, int> anc;
            string cur = ming1;
            int da = 0;
            while (!cur.empty())
            {
                anc[cur] = da++;
                if (!fa.count(cur))
                {
                    break;
                }
                cur = fa[cur];
            }
            bool f = 1;
            cur = ming2;
            int db = 0;
            while (!cur.empty())
            {
                if (anc.count(cur))
                {
                    if (anc[cur] > 4 || db > 4)
                    {
                        f = 0;
                    }
                    break;
                }
                if (!fa.count(cur))
                {
                    break;
                }
                cur = fa[cur];
                db++;
            }
            if (f == 1)
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
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