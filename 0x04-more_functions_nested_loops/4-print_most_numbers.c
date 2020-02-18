#include "holberton.h"
/**
 * print_most_numbers- from 0 to 9, except 2 and 9 followed by a new line..
 *
 * Return: Always 0.
 */
void print_most_numbers(void)
{
	int n = '0';

	while (n <= '9')

	{
		if (n != '2' && n != '4')
		{
			_putchar(n);
		}
		n++;
	}
	_putchar('\n');

}
