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
struct person
{
    string ming, xin;
    int sex, father_id = -1;
};
void solve()
{
    vector<person> v;
    map<string, int> id;
    map<string, string> fa;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string ming, xin;
        string xinn;
        int sex;
        cin >> ming >> xin;
        if (end_with(xin, "sson"))
        {
            xinn = xin.substr(0, xin.size() - 4);
            sex = 1;
            fa[ming] = xinn;
        }
        else if (end_with(xin, "sdottir"))
        {
            xinn = xin.substr(0, xin.size() - 7);
            sex = 0;
            fa[ming] = xinn;
        }
        else if (xin.back() == 'm')
        {
            xinn = xin.substr(0, xin.size() - 1);
            sex = 1;
        }
        else
        {
            xinn = xin.substr(0, xin.size() - 1);
            sex = 0;
        }
        v.push_back({ming, xinn, sex, -1});
        id[ming] = i;
    }
    for (auto& [ming, xin, sex, father_id] : v)
    {
        if (fa.count(ming) && id.count(fa[ming]))
        {
            father_id = id[fa[ming]];
        }
    }
    int m;
    cin >> m;
    while (m--)
    {
        string ming1, xin1, ming2, xin2;
        cin >> ming1 >> xin1 >> ming2 >> xin2;
        if (!id.count(ming1) || !id.count(ming2))
        {
            cout << "NA" << endl;
        }
        else if (v[id[ming1]].sex == v[id[ming2]].sex)
        {
            cout << "Whatever" << endl;
        }
        else
        {
            unordered_map<int, int> anc;
            int cur = id[ming1];
            int da = 0;
            while (cur != -1)
            {
                anc[cur] = da++;
                cur = v[cur].father_id;
            }
            bool f = 0;
            cur = id[ming2];
            int db = 0;
            while (cur != -1)
            {
                if (anc.count(cur))
                {
                    if (anc[cur] < 4 || db < 4)
                    {
                        f = 1;
                    }
                    break;
                }
                cur = v[cur].father_id;
                db++;
            }
            if (f == 0)
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