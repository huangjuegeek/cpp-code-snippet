#include <iostream>
using namespace std;
// 控制输出的有效数字位数
int main()
{
    double result = sqrt(3.0);
    for (int i = 0; i <= 9; i++) {
        cout.precision(i);
        cout << result << endl;
    }
    cout << "当前的输出精度为：" << cout.precision() << endl;
    return 0;
}
