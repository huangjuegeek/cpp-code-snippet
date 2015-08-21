#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>
// 用户在控制台中输入一串整数和任意数目的空格，这些整数和空格位于同一行。
// 当用户按下"Enter"键时结束输入，输出所有整数的和
int main()
{
    int i, sum = 0;
    char ch;
    while (scanf("%d", &i) == 1) {
        sum += i;
        while ((ch = getchar()) == ' ');
        if (ch == '\n') {
            break;
        }
        ungetc(ch, stdin);
    }
    printf("%d", sum);
    return 0;
}