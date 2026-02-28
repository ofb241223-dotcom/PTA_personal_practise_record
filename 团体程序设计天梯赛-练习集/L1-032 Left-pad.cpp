/*
  @pintia psid=994805046380707840 pid=994805100684361728 compiler=GXX
  ProblemSet: 团体程序设计天梯赛-练习集
  Title: Left-pad
  https://pintia.cn/problem-sets/994805046380707840/exam/problems/type/7?problemSetProblemId=994805100684361728
*/
// @pintia code=start
#include <cstdio>
#include <iostream>
#include <string>


using namespace std;

int main()
{
    int n;
    char c;
    if (!(cin >> n >> c))
        return 0;
    getchar();  // 处理第一行末尾的换行符
    string s;
    getline(cin, s);
    int len = s.length();
    if (len < n)
    {
        // 需要在前面填充
        for (int i = 0; i < n - len; i++)
            cout << c;
        cout << s << endl;
    }
    else
    {
        // 原字符串过长，截取最后 n 个字符
        cout << s.substr(len - n) << endl;
    }
    return 0;
}
// @pintia code=end