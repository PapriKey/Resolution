#include<stdio.h>

int cnt(int num[],int len);

int main(void)
{
	int num[10] = { 1,2,3,4,5,6,7,8,9,0 },len;
	len = sizeof(num) / sizeof(num[0]);
	printf("%d\n", cnt(num,len));
	return 0;
}

int cnt(int num[],int len)
{
	if (len == 1)return num[0];
	else {
		return num[len-1]+cnt(num,len-1);
	}
}
