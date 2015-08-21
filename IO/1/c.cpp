#include <iostream>
using namespace std;

// 用户在控制台中输入一串整数和任意数目的空格，这些整数和空格位于同一行。
// 当用户按下"Enter"键时结束输入，输出所有整数的和
int main()
{
    int a, sum = 0;
    while (cin >> a)
    {
        sum += a;
        while (cin.peek() == ' ') {
            cin.get();
        }
        if (cin.peek() == '\n') {
            break;
        }
    }
    cout << sum << endl;
    return 0;
}
