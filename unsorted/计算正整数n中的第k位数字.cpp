/*
题目描述
编写程序，输入正整数n，然后通过调用函数digit(n,k)，使得函数返回正整数n中的第k位数字（从右边算起）。例如，digit(829,1)返回9，digit(829,2)返回2，而digit(829,3)则返回8。
如果k大于n所含有的数字的个数，那么函数返回0。

编写两个函数：main和digit。下面给出digit函数的原型：
int digit(int n, int k);
在main函数中输入正整数n及正整数k，并调用digit函数计算正整数n中的第k位数字，再返回正整数n中的第k位数字。


输入
输入正整数n及正整数k，n和k之间间隔一个空格。


输出
输出正整数n中的第k位数字。


样例输入
829 1
样例输出
9
*/

#include<stdio.h>

int digit(int num, int n);

int main() {
    int num,n;

    scanf("%d %d", &num,&n);
    printf("%d",digit(num, n));
    return 0;
}

int digit(int num, int n)
{
    int i = 0;
    int t[10] = {0};
    for (; i < 10 && num != 0; i++)
    {
        t[i] = num % 10;
        num /= 10;
    }
    if (n > i + 1) n = 0; else
    {
        n = t[n-1];
    }
    return n;

}
