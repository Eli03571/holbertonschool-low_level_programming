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

	while (number <= 102)
	{
		putchar(number);
		number++;
		if (number == 58)
			number = 97;
	}

	putchar('\n');

	return (0);
}
