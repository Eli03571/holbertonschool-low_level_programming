#include <stdio.h>
/**
 * main - main block
 * Description: prints all single digit numbers of base 10 starting from 0,
 * followed by a new line.
 * Return: 0
 */
int main(void)
{
	int number = 0;

	while (number <= 99)
	{
		putchar((number / 10) + '0');
		putchar((number % 10) + '0');
		if (number == 99)
			break;
		putchar(44);
		putchar(32);
		number++;
	}

	putchar('\n');

	return (0);
}
