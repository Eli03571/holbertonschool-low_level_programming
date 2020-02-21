#include <stdio.h>
int main()
{

char *s1 = "";
char *s2 = NULL;
	if(s1 == s2)
	{
		printf("%d", 1);

	}
	else

	{
		printf("%d", 0);

	}

	putchar(*s1);
	putchar(*s2);

		return (0);
}
