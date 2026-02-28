/*
  @pintia psid=994805046380707840 pid=994805102173339648 compiler=GXX
  ProblemSet: 团体程序设计天梯赛-练习集
  Title: 到底是不是太胖了
  https://pintia.cn/problem-sets/994805046380707840/exam/problems/type/7?problemSetProblemId=994805102173339648
*/
// @pintia code=start
#include <cmath>
#include <iostream>


using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        double h, w;
        cin >> h >> w;
        double x = w / 2 - h * 0.9 + 90;
        double y = h * 0.9 - 90;
        if (abs(x) < y * 0.1)
        {
            cout << "You are wan mei!" << endl;
        }
        else if (x >= y * 0.1)
        {
            cout << "You are tai pang le!" << endl;
        }
        else
        {
            cout << "You are tai shou le!" << endl;
        }
    }
    return 0;
}
// @pintia code=end