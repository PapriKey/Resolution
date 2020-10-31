/*
输入10个数字后以从大到小的排列输出。
*/
#include<stdio.h>
int maxi(int a[], int cnt);

int main(void)
{
	int a[10] = { 0 };
	printf("依次输入10个数字:\n");
	for (int i = 0; i < 10; i++)
	{
		int num;
		scanf("%d ", &num);
		a[i] = num;
	}

	int len = sizeof(a) / sizeof(a[0]),max,swa;
	
	for (int cnt = len -1; cnt > 0; cnt--)
	{
		max = maxi(a, cnt);
		swa = a[cnt];
		a[cnt] = a[max];
		a[max] = swa;
	}
	
	for (int cnt = 0; cnt < len; cnt++)
		printf("%d ", a[cnt]);
	
	return 0;
}
int maxi(int a[], int cnt)
{
	//每一次执行都会找到数组指定范围内的最大值的编号
	int maxi = 0;
	for (int i = cnt; i > 0; i--)
	{
		if (a[maxi] < a[i])
		{
			maxi = i;
		}
	}
	return maxi;
}
