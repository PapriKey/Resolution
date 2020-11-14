/*
总时间限制: 1000ms 内存限制: 65536kB
描述
给定一个只包含小写字母的字符串，请你找到第一个仅出现一次的字符。如果没有，输出no。

输入
一个字符串，长度小于100000。

输出
输出第一个仅出现一次的字符，若没有则输出no。

样例输入
abcabd

样例输出
c
*/

#include<stdio.h>
#include <stdlib.h>

int main()
{ 
    char ch[100000] = { 0 }, xh[123] = { 0 };
    char zh;
    int k = 0;
    zh = getchar();
    for (int i=0; zh!='\n';i++)
    {
        ch[i] = zh;
        zh = getchar();
    }
    for (int i = 0; ch[i] != 0; i++)
    {
        xh[ch[i]]++;
    }

    for (int i = 0; ch[i] != 0; i++)
    {

        if (xh[ch[i]] == 1)
        {
            printf("%c", ch[i]);
            exit(0);
            k = 1;
        }
    }

    if (k == 0)
        printf("no");

    return 0;
}
