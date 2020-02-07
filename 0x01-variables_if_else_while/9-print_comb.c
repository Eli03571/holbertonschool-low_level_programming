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

	while (number <= 57)
	{
		putchar(number);
		if (number == 57)
			break;
		putchar(44);
		putchar(32);
		number++;
	}

	putchar('\n');

	return (0);
}
