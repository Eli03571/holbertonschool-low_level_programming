#include <stdio.h>
/**
 * main - main block
 * Description: print from a to z chars
 * Return: 0
 */
int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}
	char Alpha = 'A';

	while (Alpha <= 'Z')
	{
		putchar(Alpha);
		Alpha++;
	}

	putchar('\n');

	return (0);
}


