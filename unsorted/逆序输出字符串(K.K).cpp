#include<stdio.h>

int main (void)
{
	char sen[100], * p;

	for (p=&sen[0]; p < &sen[100]; p++)
	{
		*p = getchar();
		if (*p == '\n')
		{
			break;
		}
	}

	for (p--; p >= &sen[0]; p--)
	{
		printf("%c", *p);
	}

	return 0;
}
