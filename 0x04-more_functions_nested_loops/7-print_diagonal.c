#include "holberton.h"

/**
 * print_diagonal - print diagonal number.
 *@n: diagonal
 * Return: Always 0.
 */
void print_diagonal(int n)
{
	int a = 1;
	int b = 2;

	while (a <= n)
	{
		b = 2;
		while (b <= a)
		{
			_putchar(' ');
			b++;
		}
		_putchar('\\');
		_putchar('\n');
		a++;
	}
	if (n < 1)
		_putchar('\n');

}
