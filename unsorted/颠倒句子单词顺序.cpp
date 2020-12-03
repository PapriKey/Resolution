/*
题目描述
编写程序颠倒句子中单词的顺序：

you can cage a swallow can't you?

Reversal of sentence: you can't swallow a cage can you?

输入
 输入一个句子，以句号(".")、问号("?")或者感叹号("!")（称为"终止字符"）终止，长度最大限度为80。

输出
输出颠倒后的句子，以"Reversal of sentence: "开头，句子结尾。注意":"后留一个空格。

样例输入
you can cage a swallow can't you?
样例输出
Reversal of sentence: you can't swallow a cage can you?
*/
#include<stdio.h>

int main(void)
{
	char sen[100] = { 0 };
	//num用于输出最后的符号,las表示单词前部，swa表示单词后部
	int num, las, swa;
	for (int i = 0; i < 100; i++)
	{
		sen[i] = getchar();
		if (sen[i] == '.' || sen[i] == '!' || sen[i] == '?')
		{
			num = i;
			las = i - 1;
			swa = i - 1;
			break;
		}
	}

	printf("Reversal of sentence: ");
	for (int i = las; i >= 0; i--)
	{
		if (sen[i] == ' ')
		{
			for (int j = i + 1; j <= swa; j++)
			{
				printf("%c", sen[j]);
			}
			swa = i - 1;
			printf(" ");
		}
		if (i == 0)
		{
			for (int j = i; j <= swa; j++)
			{
				printf("%c", sen[j]);
			}
		}
	}
	printf("%c", sen[num]);
	return 0;
}
