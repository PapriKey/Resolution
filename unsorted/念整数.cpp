/*
# 题目内容：
你的程序要读入一个整数，范围是[-100000,100000]。然后，用汉语拼音将这个整数的每一位输出出来。
如输入1234，则输出：
yi er san si
注意，每个字的拼音之间有一个空格，但是最后的字后面没有空格。当遇到负数时，在输出的开头加上“fu”，如-2341输出为：
fu er san si yi
# 输入格式:
一个整数，范围是[-100000,100000]。
# 输出格式：
表示这个整数的每一位数字的汉语拼音，每一位数字的拼音之间以空格分隔，末尾没有空格。
# 输入样例：
-30
# 输出样例：
fu san ling
*/

#include<stdio.h>
#include <math.h>

int main(void)
{
	long long int r_inp = 0, i = 1, w = 0, inp = 0, res = 0;

	scanf("%lld", &r_inp);
	
	if (r_inp < 0)
		printf("fu ");

	r_inp = abs(r_inp);
	inp = r_inp;

	while (r_inp > 9)
	{
		w++;
		r_inp /= 10;
	}
	w = pow(10, w); //printf("%lld\n", w);

	do
	{
		res = inp / w;
		switch (res)
		{
		case 1:
			printf("yi");
			break;
		case 2:
			printf("er");
			break;
		case 3:
			printf("san");
			break;
		case 4:
			printf("si");
			break;
		case 5:
			printf("wu");
			break;
		case 6:
			printf("liu");
			break;
		case 7:
			printf("qi");
			break;
		case 8:
			printf("ba");
			break;
		case 9:
			printf("jiu");
			break;
		case 0:
			printf("ling");
			break;
		}
		inp %= w;
		w /= 10;
		if (w > 0)
			printf(" ");

	} while (w > 0);

	return 0;
}
