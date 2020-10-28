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
	
	
*/




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
