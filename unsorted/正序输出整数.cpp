/* 正序输出整数 */
/*
求数字位数函数：

#include<math.h>
long long int Line()
	{
	long long int r_inp = 0, w = 0, inp = 0;
		scanf("%lld", &r_inp);
		inp = r_inp;
		while (r_inp > 9)
		{
			w++;
			r_inp /= 10;
		}
		w = pow(10, w);
		return w;
	}
	
	
	
long long int
	
*/



##这是没有使用数组的求法

/*
#include<stdio.h>
#include <math.h>

int main(void)
{
	long long int r_inp=0, i=1,w=0,inp=0,res=0;

	scanf("%lld", &r_inp);
	inp = r_inp;
	while (r_inp > 9)
	{
		w++;
		r_inp /= 10;
	} 
	w = pow(10, w); 

	do 
	{
		res = inp / w;
		printf("%lld ", res);
		inp %= w;
		w /= 10;

	} while (w > 0);

	return 0;
}

*/


##这是使用数组的解法

#include<stdio.h>

int main(void)
{
	long nub,swp,i=0,cnt=0;
	int lis[10] = { 0 };

	scanf("%ld", &nub);

	while (nub > 0)
	{
		swp = nub % 10;
		lis[i] = swp;
		i++;
		nub /= 10;
		cnt++;
	}

	for (i = cnt-1; i >= 0; i--)
	{
		
		printf("%d", lis[i]);

		if (i != 0)
			printf(" ");
	}

	return 0;
}
