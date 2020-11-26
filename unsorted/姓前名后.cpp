/*
题目描述
编写一个程序，输入英文名和姓，以"."结束。先输出姓氏，其后跟一个逗号，然后输出名的首字母，最后加一个点：

Lloyd Fosdick.

Fosdick, L.

输入
 输入英文名和姓，名和姓的首字母大写，以"."结束输入。

注意：名和姓都可能只有一个字母，且输入中可能含空格（名之前、名和姓之间、姓氏之后），也可能无空格，但名内及姓内不含空格。

输出
 先输出姓氏，其后跟一个逗号，然后输出名的首字母。注意","后留一个空格。

样例输入
Lloyd Fosdick.
样例输出
Fosdick, L.
*/

#include<stdio.h>

int main (void)
{
	char sen[100] = {0}, * p, F;

	for (p=&sen[0]; p < &sen[100]; p++)
	{
		*p = getchar();
		if (*p == '\n')
		{
			*p = 0;
			break;
		}
	}

	for (p = &sen[0]; p < &sen[100]; p++)
	{
		if (*p == ' ') continue;
		else
		{
			F = *p;
			*p = 0;
			break;
		}
	}
	for (; p < &sen[100]; p++)
	{
		if (*p >= 'A' && *p <= 'Z') break;
		else continue;
	}


	for (; p < &sen[100]; p++)
	{
		if (*p == ' ') continue;
		if (*p == '.')
		{
			printf(", ");
			break;
		}
		printf("%c", *p);
	}
	printf("%c.", F);

	return 0;
}
