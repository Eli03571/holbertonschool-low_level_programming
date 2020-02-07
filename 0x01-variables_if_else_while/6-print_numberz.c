#include <stdio.h>
/**
 * main - main block
 * Description: prints all single digit numbers of base 10 starting from 0,
 * followed by a new line.
 * Return: 0
 */
int main(void)
{
	int number = 48;

	while (number < 58)
	{
		putchar(number);
		number++;
	}

	putchar('\n');

	return (0);
}
