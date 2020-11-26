/*
题目描述
编写程序计算句子的平均词长:

It was deja vu all over again.

3.4

简单起见，程序中把标点符号作为一条句子的结尾，并把它看作其前面单词的一部分。平均词长显示一个小数位。

输入
输入一条句子，词与词之间用一个空格隔开，以标点符号"."结尾。

输出
输出平均词长，保留一个小数位，如样例。

样例输入
It was deja vu all over again.
样例输出
3.4
*/

#include<stdio.h>

int main()
{
    char ch;
    double a = 0, b = 1;
    do {
        ch = getchar();
        if (ch != ' ') {
            a++;
        }
        else {
            b++;
        }
    } while (ch != '.');
    printf("%.1lf", a/b);

    return 0;
}
