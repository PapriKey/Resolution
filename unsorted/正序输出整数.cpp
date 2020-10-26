/* 正序输出整数 */
#include<stdio.h>
#include <math.h>

int main(void)
{
	long long int r_inp=0, i=1,w=0,inp=0,res=0;

	scanf_s("%lld", &r_inp);
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
		printf("%lld ", res);
		inp %= w;
		w /= 10;

	} while (w > 0);

	return 0;
}
