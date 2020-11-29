#include <stdio.h>
#include <stdlib.h>
void reverse_string(char* str)
{
	if (*(++str) != '\0')
	{
		reverse_string(str);
	}
	printf("%c", *(str - 1));
}


int main()
{
	char sen[100] = {0}, * p;

	for (p = &sen[0]; p < &sen[100]; p++)
	{
		*p = getchar();
		if (*p == '\n')
		{
			break;
		}
	}

	printf("翻转后的字符串：");
	reverse_string(sen);
	printf("\n");
	return 0;
}
